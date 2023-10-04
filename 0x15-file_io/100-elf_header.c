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
 * print_elf_header - prints elf header
 * @header: pointer to elf header
 *
 * Return: void
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   "); /* append the hex characters to this line */

	/* convert the characters to hex */
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	/* move to next line */
	printf("\n");

	printf("  Class:			     %s\n",
			(header->e_ident[EI_CLASS] == ELFCLASS32)
			? "ELF32" : "ELF64");
	printf("  Data:				     %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's compliment, little endian"
			: "2's compliment, big endian");
	printf("  Version:			     %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:			     %s\n",
			(header->e_ident[EI_OSABI] == ELFOSABI_SYSV)
			? "UNIX System V" : "Other");
	printf("  ABI Version:			     %d\n",
			(header->e_ident[EI_ABIVERSION]));
	printf("  Type:				     %s\n",
			(header->e_type == ET_EXEC)
			? "Executable" : "Other");
	printf("  Entry point address:		     Ox%lx\n",
			header->e_entry);
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
	Elf64_Ehdr header;
	const char *filename;

	if (argc != 2)
		exit_error("Usage: elf_header elf_filename");

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1) /* if file opening fails */
		exit_error("Error opening file");

	/* if bad reading */
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		exit_error("Error reading ELF header");

	/* check if ELF file */
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		exit_error("Not an ELF file");

	/* print header info */
	print_elf_header(&header);

	close(fd); /* close file descriptor */

	return (0);
}
