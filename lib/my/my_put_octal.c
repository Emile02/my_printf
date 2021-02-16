/*
** EPITECH PROJECT, 2020
** my_put_octal
** File description:
** my_put_octal
*/

#include "../../include/my.h"

void my_calc_octal(int nb)
{
    int place[3];
    int i;
    int mod;

    place[0] = 0;
    place[1] = 0;
    place[2] = 0;
    i = 2;
    while (nb > 0)
    {
        mod = nb % 8;
        nb = (nb /8);
        place[i] = mod;
        i = i - 1;
    }
    my_put_nbr(place[0]);
    my_put_nbr(place[1]);
    my_put_nbr(place[2]);
}

void my_put_octal(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] <= 32 || str[i] >= 123)
        {
            my_putstr("\\");
            my_calc_octal(str[i]);
            i = i + 1;
        }
        else
        {
            my_putchar(str[i]);
            i = i + 1;
        }
    }
}
