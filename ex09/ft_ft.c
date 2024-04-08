#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if (nbr == -2147483648) // Special case for the minimum integer value
    {
        write(1, "-2147483648", 11);
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
        ft_putnbr(nbr);
    }
    else if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        ft_putchar(nbr + '0');
    }
}

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int nbr = 12;
    ft_ft(&nbr);
    ft_putnbr(nbr);
    return 0;
}
