#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *ident);
void print_magic(unsigned char *ident);
void print_class(unsigned char *ident);
void print_data(unsigned char *ident);
void print_version(unsigned char *ident);
void print_abi(unsigned char *ident);
void print_osabi(unsigned char *ident);
void print_type(unsigned int type, unsigned char *ident);
void print_entry(unsigned long int entry, unsigned char *ident);
void close_elf(int elf);

/**
 * check_elf - Checks ELF file.
 * @ident: A pointer to an array
 */
void check_elf(unsigned char *ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
	if (ident[idx] != 127 &&
			ident[idx] != 'E' &&
			ident[idx] != 'L' &&
			ident[idx] != 'F')
	{
	dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	exit(98);
	}
	}
}

/**
 * print_magic - Prints the magic numbers
 * @ident: A pointer to an array
 */
void print_magic(unsigned char *ident)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
	printf("%02x", ident[index]);

	if (index == EI_NIDENT - 1)
	printf("\n");
	else
	printf(" ");
	}
}

/**
 * print_class - Prints the class
 * @ident: A pointer to an array
 */
void print_class(unsigned char *ident)
{
	printf(" Class: ");

	switch (ident[EI_CLASS])
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
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of
 * @ident: A pointer to an array
 */
void print_data(unsigned char *ident)
{
	printf(" Data: ");

	switch (ident[EI_DATA])
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
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 *print_version - Prints the version
 *@ident: A pointer to an array.
 */
void print_version(unsigned char *ident)
{
	 printf(" Version: %d",
			  ident[EI_VERSION]);

	switch (ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Prints the OS/ABI.
 * @ident: A pointer to an array
 */
void print_osabi(unsigned char *ident)
{
	printf(" OS/ABI: ");

	switch (ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
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
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version.
 * @ident: A pointer to an array
 */
void print_abi(unsigned char *ident)
{
	printf(" ABI Version: %d\n",
			ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the header.
 * @type: elf.
 * @ident: A pointer to an array.
 */
void print_type(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf(" Type: ");

	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", type);
	}
}

/**
 * print_entry - Prints the entry point.
 * @entry: The address of elf.
 * @ident: A pointer to an array.
 */
void print_entry(unsigned long int entry, unsigned char *ident)
{
	printf(" Entry point address: ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * close_elf - Closes an ELF file.
 * @e: The file descriptor
 */
void close_elf(int e)
{
	if (close(e) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", e);
		exit(98);
	}
}

/**
 * main - Displays the information contained in ELF
 * @argc: argument count
 * @argv: Argument vector
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
	exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
	close_elf(op);
	dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
	exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
	free(header);
	close_elf(op);
	dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
	exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(op);
	return (0);
}

