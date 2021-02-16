/*
** EPITECH PROJECT, 2020
** function
** File description:
** function for my_printf
*/

#include <stdarg.h>
#include "../../include/my.h"
#include "../../include/set.h"
#include <stdio.h>

const struct point flags[] =
{
    {'i', &my_print_int},
    {'d', &my_print_int},
    {'s', &my_print_string},
    {'S', &my_print_string},
    {'c', &my_print_char},
    {'o', &my_print_octal},
    {'x', &my_print_lower_hexa},
    {'X', &my_print_upper_hexa},
    {'b', &my_binary},
    {NULL, NULL}
};

int show_flag(char str, va_list *args)
{
    int i = 0;
    while (flags[i].flag != NULL)
    {
        if (flags[i].flag == str)
        {
            flags[i].function(args);
            return (0);
        }
        i++;
    }
    if (str == '\n') {
        my_putchar('\n');
        return (0);
    }
    return (0);
}

int detect(char *str, va_list *args, int i)
{
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            i++;
            continue;
        }
        show_flag(str[i], args);
        i++;
    }
    return (0);
}

int my_printf(char *str, ...)
{
    va_list args;
    va_start(args, str);

    int i = 0;

    while (str[i] != '\n') {
        if (str[i] == '%') {
            i = detect(str, &args, i);
        }
        i++;
    }
    va_end(args);
    return (0);
}