/*
** EPITECH PROJECT, 2020
** binary
** File description:
** bin
*/

void my_put_bin(int nb)
{
    int mod;

    if (nb >= 2)
    {
        mod = nb % 2;
        nb = nb / 2;
        my_put_bin(nb);
    }
    if (nb > 0)
    {
        mod = nb % 2;
        nb = nb / 2;
    }
    my_putchar(mod + 48);
}
