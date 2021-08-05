#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b); /*0-binary_to_uint.c*/
void print_binary(unsigned long int n); /* 1-print_binary.c */
int set_bit(unsigned long int *n, unsigned int index);

int get_bit(unsigned long int n, unsigned int index);

int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

int get_endianness(void);
int _putchar(char c);

#endif /* MAIN_H */
