#include "main.h"
/**
 * _printf - function that handles format specifiers
 * @format: constant pointer
 * Return: Character input
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...) {
    int print_char = 0;
    va_list args;
    va_start(args, format);

    if (format == NULL)
        return (-1);

    while (*format != '\0') {
        if (*format != '%') {
            write(1, format, 1);
            print_char++;
        } else {
            format++; 
            if (*format == '\0') break;
            if (*format == '%') {
                write(1, format, 1);
                print_char++;
            } else if (*format == 'c') {
                char c = va_arg(args, int);
                write(1, &c, 1);
                print_char++;
            } else if (*format == 's') {
                char *str = va_arg(args, char*);
                while (*str) {
                    write(1, str, 1);
                    print_char++;
                    str++;
                }
            }
        }
        format++;
    }
    va_end(args);
    return print_char;
}

