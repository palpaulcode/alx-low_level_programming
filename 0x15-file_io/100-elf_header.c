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
 * print_elf_magic - print magic value representations
 * @header: the elf file header to use
 *
 * Return: void
 */
void print_elf_magic(const Elf64_Ehdr *header)
{
	int i;

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i < (EI_NIDENT - 1))
			printf(" ");
	}

	printf("\n");
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
 * get_elf_abi_version - print string representation of OS/ABI version
 * @osabi: the osabi value to use
 *
 * Return: void
 */
void get_elf_abi_version(unsigned char osabi)
{
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("OpenBSD\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_ARM_AEABI:
			printf("ARM AEABI\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>", osabi);
	}
}
		/*case ELFOSABI_AIX:printf("AIX\n");break;*/
		/*case ELFOSABI_TRU64:printf("UNIX - Tru64\n");break;*/
		/*case ELFOSABI_MODESTO:printf("Novell Modesto\n");break;*/

/**
 * get_elf_type - print string representation of e_type
 * @e_type: e_type to use
 *
 * Return: void
 */
void get_elf_type(Elf64_Half e_type)
{
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry_point_address - print entry point address of the ELF header file
 * @entry_point: the ELF header entry point address
 * @data: the ELF class
 *
 * Return: void
 */
void print_entry_point_address(unsigned long int entry_point,
		unsigned char data)
{
	if (data == ELFDATA2MSB)
	{
		entry_point = ((entry_point << 8) & 0xFF00FF00) |
			((entry_point >> 8) & 0xFF00FF);
		entry_point = (entry_point << 16) | (entry_point >> 16);
	}

	if (data == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)entry_point);
	}
	else
	{
		printf("%#lx\n", entry_point);
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
	int fd/*, i*/;
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
	print_elf_magic(&header); /* convert the characters to hex */
	printf("  Class:			     ");
			get_elf_class(header.e_ident[EI_CLASS]);
	printf("  Data:				     ");
			get_elf_data(header.e_ident[EI_DATA]);
	printf("  Version:			     %d (current)\n",
			header.e_ident[EI_VERSION]);
	printf("  OS/ABI:			     ");
			get_elf_abi_version(header.e_ident[EI_OSABI]);
	printf("  ABI Version:			     %d\n",
			(header.e_ident[EI_ABIVERSION]));
	printf("  Type:				     ");
			get_elf_type(header.e_type);
	printf("  Entry point address:		     ");
	print_entry_point_address(header.e_entry, header.e_ident[EI_DATA]);

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
