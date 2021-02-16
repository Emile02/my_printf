/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** print string
*/

#include <stdarg.h>
#include <stdio.h>
#include "../../include/my.h"
#include "../../include/set.h"

void my_print_string(va_list *args)
{
    my_putstr(va_arg(*args, char *));
}

void my_print_char(va_list *args)
{
    my_putchar(va_arg(*args, int));
}

void my_print_int(va_list *args)
{
    my_put_nbr(va_arg(*args, int));
}