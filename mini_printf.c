/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** recode of printf()
*/

#include <stdarg.h>
#include <unistd.h>
#include "include/my.h"

int print_letter_string(char const *format, va_list args, int *i)
{
    int count = 0;
    char c;
    char *str;

    if (format[*i] == 'c') {
        c = (char)va_arg(args, int);
        my_putchar(c);
        count++;
    }
    if (format[*i] == 's') {
        str = va_arg(args, char *);
        count += my_putstr(str);
    }
    return count;
}

int print_number_pourcentage(char const *format, va_list args, int *i)
{
    int count = 0;
    int num;
    char lol;

    if (format[*i] == 'd') {
        num = va_arg(args, int);
        count += my_put_nbr(num);
    }
    if (format[*i] == '%') {
        my_putchar('%');
    }
    return count;
}

int format_specificateur(char const *format, va_list args, int *i)
{
    int count = 0;

    if (format[*i] == 'c' || format[*i] == 's') {
        count = print_letter_string(format, args, i);
    } else if (format[*i] == 'd' || format[*i] == '%') {
        count = print_number_pourcentage(format, args, i);
    }
    return count;
}

int mini_printf(char const *format, ...)
{
    va_list args;
    int i = 0;
    int count;

    va_start(args, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i++;
            count += format_specificateur(format, args, &i);
        } else {
            my_putchar(format[i]);
            count++;
        }
        i++;
    }
    va_end(args);
    return count;
}
