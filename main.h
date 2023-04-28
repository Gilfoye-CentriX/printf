#ifndef _main_h_
#define _main_h_
#include <stdarg.h>
/**
 * struct formatarg - Struct of elements
 * @forma: data type format
 * @f: pointer to function
 *
 */

typedef struct formatarg
{
char *forma;
int (*f)(va_list);

} formatico;

int _printf(const char *format, ...);
int printch(va_list valist);
int prints(va_list valist);
int printdi(va_list valist);
int printper(va_list valist);
int printbi(va_list valist);
int printrev(va_list valist);
int print_rev(char *s);
int printrot(va_list valist);
char *rot13(char *s1);
int _putchar(char c);
int _puts(char *str);

#endif /* _main_h_ */
