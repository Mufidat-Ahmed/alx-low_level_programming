#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <elf.h>

void p_magic(unsigned char *e_ident);
void p_class(unsigned char *e_ident);
void p_data(unsigned char *e_ident);
void p_version(unsigned char *e_ident);
void p_abi(unsigned char *e_ident);
void p_osabi(unsigned char *e_ident);
void p_type(unsigned int e_type, unsigned char *e_ident);
void p_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - An elf file checker
 * @car: points to magic containing array
 */
void check_elf(unsigned char *e_ident)
{
	int i = 0;

	for (; i < 4; i++)
	{
		if (e_ident[i] != 27 && e_ident[i] != 'E' && e_ident[i] != 'L' && e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an elf file\n");
				exit(98);
		}
	}
}
/**
 * p_magic - prints magic number of an elf file
 * @car: points to magic containing array
 */

void p_magic(unsigned char *e_ident)
{
	int i = 0;

	printf("Magic: ");
	for (; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
	if (i == EI_NIDENT - 1)
		printf("\n");
	else
		printf(" ");
	}
}

/**
 * p_class - prints the class of an elf file
 * @car: points to an array containing class
 */

void p_class(unsigned char *e_ident)
{
	printf("Class: ");
	switch (e_ident[EI_CLASS])
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
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * p_data - prints the data of an elf file
 * @car: array containing data to be printed
 */

void p_data(unsigned char *e_ident)
{
	printf("Data: ");
	switch (e_ident[EI_DATA])
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
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}
/**
 * p_version - prints the version of the elf file
 * @car: array containing data to be printed
 */

void p_version(unsigned char *e_ident)
{
	printf("Version: %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
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
 * p_abi - prints the abi version of the elf file
 * @car: array containing the abi version
 */

void p_abi(unsigned char *e_ident)
{
	printf("ABI Version: %d\n",
	e_ident[EI_ABIVERSION]);
}
/**
 * p_osabi - prints the osabi version of an elf file
 * @car: array containing the osabi version
 */
void p_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");
	switch (e_ident[EI_OSABI])
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
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * p_type - prints the type of the elf file
 * @car: array containing type to be printed
 * @type: the file type
 */
void p_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf(" Type: ");
	switch (e_type)
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
			printf("<unknown: %x>\n", e_type);
	}

}
/**
 * p_entry - prints the entry point of the elf file
 * @car: array containing entry of the elf file
 * @entry: address of elf entry point
 */
void p_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#lx\n", e_entry);
	else
		printf("%#lx\n", e_entry);
}
/**
 * close_elf - closes the elf file
 * @elf: the elf file to be closed
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
			exit(98);
	}
}
/**
 * main - Entry point of the program
 * @argc: number of arguments containined in the program
 * @argv: array that points to argc
 * Return: 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int m, l;

	m = open(argv[1], O_RDONLY);
	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(m);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	l = read(m, header, sizeof(Elf64_Ehdr));
	if (l == -1)
	{
		free(header);
		close_elf(m);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	p_magic(header->e_ident);
	p_class(header->e_ident);
	p_data(header->e_ident);
	p_version(header->e_ident);
	p_osabi(header->e_ident);
	p_abi(header->e_ident);
	p_type(header->e_type, header->e_ident);
	p_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(m);
	return (0);
}
