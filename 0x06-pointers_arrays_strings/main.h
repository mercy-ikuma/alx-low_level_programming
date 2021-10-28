#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c);

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: digit to be checked
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: one integer
 * @b: second integer
 * Return: product of a and b
 */

int mul(int a, int b);

/**
 * print_numbers - print 0 to 9
 */

void print_numbers(void);

/**
 * print_most_numbers - print 0 to 9, skip 2 and 4
 */

void print_most_numbers(void);

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void);

/**
 * print_line(int n) - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n);

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n);

/**
 * print_square - print a square of given size
 * @size: size to draw
 */

void print_square(int size);

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size);

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size);

/**
 * print_number = print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *a);
char *cap_string(char *a);
char *leet(char *a);
char *rot13(char *a);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif