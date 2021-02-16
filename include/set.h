/*
** EPITECH PROJECT, 2020
** flag h
** File description:
** flag for my_printf
*/

#include <stdarg.h>

#ifndef SET_H_
#define SET_H_

void my_print_string(va_list *args);

void my_print_char(va_list *args);

void my_print_int(va_list *args);

void my_print_octal(va_list *args);

void my_print_lower_hexa(va_list *args);

void my_print_upper_hexa(va_list *args);

void my_binary(va_list *args);

void my_upper_hexa(int nb);

void my_hexadecimal(int nb);

void my_put_bin(int nb);

int show_flag(char str, va_list *args);


struct point
{
    char flag;
    void (*function)(va_list *args);
};

#endif