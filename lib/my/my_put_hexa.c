/*
** EPITECH PROJECT, 2020
** hexadecimal code (lower and upper)
** File description:
** convert decimal to hexadecimal
*/

void my_hexadecimal(int nb)
{
    int mod;

    if (nb >= 16)
    {
        mod = nb % 16;
        nb = nb / 16;
        my_hexadecimal(nb);
    }
    else if (nb > 0)
    {
        mod = nb % 16;
        nb = nb / 16;
    }
    if (nb > 9)
        my_putchar(nb + 87);
    else
        my_putchar(nb + 48);
}

void my_upper_hexa(int nb)
{
    int mod;

    if (nb >= 16)
    {
        mod = nb % 16;
        nb = nb / 16;
        my_upper_hexa(nb);
    }
    else if (nb > 0)
    {
        mod = nb % 16;
        nb = nb / 16;
    }
    if (nb > 9)
        my_putchar(nb + 55);
    else
        my_putchar(nb + 48);
}
