#include "main.h"

/**
 * exit_error - print error message and exit with status code 98
 * @message: error message to print
 *
 * Return: void
 */
void exit_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
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
			return "NONE (Unknown type)";
		case ET_REL:
			return "REL (Relocatable file)";
		case ET_EXEC:
			return "EXEC (Executable file)";
		case ET_DYN:
			return "DYN (Shared object file)";
		case ET_CORE:
			return "CORE (Core file)";
		default:
			return "Unknown";
	}
}

/**
 * print_elf_header - prints elf header
 * @fd: file descriptor to use
 *
 * Return: void
 */
void print_elf_header(const char *filename)
{
	int fd, i;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		exit_error("Error opening file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		close(fd);
		exit_error("Error reading ELF header");
	}

	printf("ELF Header:\n");
	printf("  Magic:   "); /* append the hex characters to this line */

	/* convert the characters to hex */
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	/* move to next line */
	printf("\n");

	printf("  Class:			     %s\n",
			(header.e_ident[EI_CLASS] == ELFCLASS32)
			? "ELF32" : "ELF64");
	printf("  Data:				     %s\n",
			(header.e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's compliment, little endian"
			: "2's compliment, big endian");
	printf("  Version:			     %d (current)\n",
			header.e_ident[EI_VERSION]);
	printf("  OS/ABI:			     %s\n",
			(header.e_ident[EI_OSABI] == ELFOSABI_SYSV)
			? "UNIX System V" : "Other");
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
		exit_error("Error reading ELF header");

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
	int fd;
	const char *filename;

	if (argc != 2)
		exit_error("Usage: elf_header elf_filename");

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1) /* if file opening fails */
		exit_error("Error opening file");

	/* if returns 0 (not elf file) */
	if (!is_elf_file(fd))
		exit_error("Not an ELF file");

	/* print header info */
	print_elf_header(filename);

	close(fd); /* close file descriptor */

	return (0);
}
