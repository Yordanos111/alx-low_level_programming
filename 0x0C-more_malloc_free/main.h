#ifndef _MAIN_H_
#define _MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _is_zero(char *argv[]);
char *_initialize_array(char *ar, int lar);
char *_initialize_array(char *ar, int lar);
int main(int argc, char *argv[]);
int _atoi(const char *s);
void print_int(unsigned long int n);
void _puts(char *str);

#endif
