/*
** EPITECH PROJECT, 2024
** mini_printf_functions
** File description:
** putchar, putstr, putnbr
*/

#include <unistd.h>
#include <stdarg.h>
#include "include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str += 1;
    }
    return 0;
}

int my_put_nbr(int nb)
{
    int count = 0;

    if (nb < 0) {
        my_putchar('-');
        count++;
        nb = -nb;
    }
    if (nb >= 10) {
        count += my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    count++;
    return count;
}
