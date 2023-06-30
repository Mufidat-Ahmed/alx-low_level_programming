#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <elf.h>

ssize_t read_text(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text(const char *filename, char *text_content);
void check_elf(unsigned char *e_ident);
void p_magic(unsigned char *e_ident);
void p_class(unsigned char *e_ident);
void p_data(unsigned char *e_ident);
void p_version(unsigned char *e_ident);
void p_abi(unsigned char *e_ident);
void p_osabi(unsigned char *e_ident);
void p_type(unsigned int e_type, unsigned char *e_ident);
void p_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

#endif
