#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int _is_digiti(char *s);
int _strlen(char *s);
void _errors(void);
int main(int argc, char *argv[]);

#endif
