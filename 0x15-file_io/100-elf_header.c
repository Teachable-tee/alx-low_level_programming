#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fontl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file
 * @e_ident: A pointer to an array containg the ELF magic number
 *
 * Description: if the file is not an ELF file - exit code 08
 */
void check_elf(unsigned char *e_ident);
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_indent[index] != 127 &&
			e_indent[index] != 'E' &&
			e_indent[index] != 'L' &&
			e_indent[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic = Prints the magic number of an ELF header
 * @e_ident: A pointer to an array containing the ELF magic numbers
 *
 * Description: magic numbers are seperated by spaces
 */
void print_magic(unsigned char *e_ident);
{
	int index;

	printf("  Magic:   ");

	for (index = 0l index < EI_NIDENT; index++)
	{
		printf("%02x", e_indent[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
