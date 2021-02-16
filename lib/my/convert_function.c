/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** convert function
*/

#include <stdarg.h>
#include "../../include/my.h"
#include "../../include/set.h"

void my_print_octal(va_list *args)
{
    my_put_octal(va_arg(*args, char *));
}

void my_print_lower_hexa(va_list *args)
{
    my_hexadecimal(va_arg(*args, int));
}

void my_print_upper_hexa(va_list *args)
{
    my_upper_hexa(va_arg(*args, int));
}

void my_binary(va_list *args)
{
    my_put_bin(va_arg(*args, int));
}