/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void print_pourcentage(void);
int print_letter_string(char const *format, va_list args, int *i);
int print_number_pourcentage(char const *format, va_list args, int *i);
int format_specificateur(char const *format, va_list args, int *i);
int mini_printf(char const *format, ...);
#endif
