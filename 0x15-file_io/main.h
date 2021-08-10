
#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void ensure_endianness(char little_e, void *data, unsigned int len);
void print_elf_header(void *h);
void print_elf_header_2(void *h);
void put_err(char *str);

#endif /* MAIN_H */

#ifndef HEADERS_H
#define HEADERS_H
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#undef HEADERS_H
#endif /* HEADERS_H */
