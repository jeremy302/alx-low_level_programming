#ifndef VARIADIC_H
#define VARIADIC_H
#ifndef NULL
#define NULL ((void *)0)
#endif

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
