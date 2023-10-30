#include "main.h"

/**
 * exit_error - print error message and exit with status code 98
 * @message: error message to print
 * @file: path to file
 *
 * Return: void
 */
void exit_error(const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(98);
}

/**
 * get_elf_class - print string representation of ELF class
 * @elf_class: character to use to get class
 *
 * Return: void
 */
void get_elf_class(unsigned char elf_class)
{
	switch (elf_class)
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_class);
	}
}

/**
 * get_elf_data - print string representation of data format (Endianness)
 * @data: character to use to check endianness
 *
 * Return: void
 */
void get_elf_data(unsigned char data)
{
	switch (data)
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", data);
	}
}


/**
 * get_elf_abi_version - get string representation of OS/ABI version
 * @osabi: the osabi value to use
 *
 * Return: string representation of the osabi value
 */
const char *get_elf_abi_version(unsigned char osabi)
{
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			return ("UNIX - System V");
		case ELFOSABI_HPUX:
			return ("UNIX - HP-UX");
		case ELFOSABI_NETBSD:
			return ("UNIX - NetBSD");
		case ELFOSABI_LINUX:
			return ("UNIX - Linux");
		case ELFOSABI_SOLARIS:
			return ("UNIX - Solaris");
		case ELFOSABI_AIX:
			return ("AIX");
		case ELFOSABI_FREEBSD:
			return ("UNIX - FreeBSD");
		case ELFOSABI_TRU64:
			return ("UNIX - Tru64");
		case ELFOSABI_MODESTO:
			return ("Novell Modesto");
		case ELFOSABI_OPENBSD:
			return ("OpenBSD");
		case ELFOSABI_ARM:
			return ("ARM");
		case ELFOSABI_IRIX:
			return ("UNIX - IRIX");
		case ELFOSABI_ARM_AEABI:
			return ("ARM AEABI");
		case ELFOSABI_STANDALONE:
			return ("Standalone App");
		/*case ELFOSABI_OPENVMS:return ("OpenVMS");*/
		/*case ELFOSABI_NSK:return ("NonStop Kernel");*/
		/*case ELFOSABI_AROS:return ("AROS");*/
		/*case ELFOSABI_FENIXOS:return ("Fenix OS");*/
		/*case ELFOSABI_CLOUDABI:return ("CloudABI");*/
		default:
			return ("unknown");
			/*return ("<unknown: %x>", osabi[EI_OSABI]);*/

	}
}

/**
 * get_elf_type - get string representation of e_type
 * @e_type: e_type to use
 *
 * Return: String representation of e_type;
 */
const char *get_elf_type(Elf64_Half e_type)
{
	switch (e_type)
	{
		case ET_NONE:
			return ("NONE (Unknown type)");
		case ET_REL:
			return ("REL (Relocatable file)");
		case ET_EXEC:
			return ("EXEC (Executable file)");
		case ET_DYN:
			return ("DYN (Shared object file)");
		case ET_CORE:
			return ("CORE (Core file)");
		default:
			return ("Unknown");
	}
}

/**
 * print_elf_header - prints elf header
 * @filename: name of file to use
 *
 * Return: void
 */
void print_elf_header(const char *filename)
{
	int fd, i;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		exit_error("Error opening file %s\n", filename);
	if (lseek(fd, 0, SEEK_SET == -1)) /*reset file pointer to beginning of file*/
	{
		close(fd);
		exit_error("Error resetting file pointer for %s\n", filename);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		close(fd);
		exit_error("Error reading ELF header in file %s\n", filename);
	}
	printf("ELF Header:\n");
	printf("  Magic:   "); /* append the hex characters to this line */
	for (i = 0; i < EI_NIDENT; i++) /* convert the characters to hex */
	{
		printf("%02x", header.e_ident[i]);
		if (i < (EI_NIDENT - 1))
			printf(" ");
	}
	printf("\n");
	printf("  Class:			     ");
			get_elf_class(header.e_ident[EI_CLASS]);
	printf("  Data:				     ");
			get_elf_data(header.e_ident[EI_DATA]);
	printf("  Version:			     %d (current)\n",
			header.e_ident[EI_VERSION]);
	printf("  OS/ABI:			     %s\n",
			get_elf_abi_version(header.e_ident[EI_OSABI]));
	printf("  ABI Version:			     %d\n",
			(header.e_ident[EI_ABIVERSION]));
	printf("  Type:				     %s\n",
			get_elf_type(header.e_type));
	printf("  Entry point address:		     Ox%lx\n",
			header.e_entry);
	close(fd);
}

/**
 * is_elf_file - checks if file is elf file
 * @fd: file descriptor to use
 *
 * Return: 1 if ELF file, 0 Otherwise
 */
int is_elf_file(int fd)
{
	Elf64_Ehdr header;

	/* if bad reading */
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		exit_error("Error: can't read ELF file %s\n", "");

	/* check if ELF file */
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		return (0); /* Not an ELF file */

	return (1);
}

/**
 * main - program entry point
 * @argc: count of arguments
 * @argv: pointer to array of pointers of arguments passed
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	const char *filename;

	if (argc != 2)
	{
		exit_error("Usage: error wrong number of args\n", "");
	}

	filename = argv[1];

	/* if returns 0 (not elf file) */
	if (!is_elf_file(open(filename, O_RDONLY)))
	{
		exit_error("Error: File %s not an ELF file\n", filename);
	}

	/* print header info */
	print_elf_header(filename);

	return (0);
}
