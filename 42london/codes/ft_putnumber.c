#include<unistd.h>

void	ft_putnumber(int nb)
{
	char	digit;

	if (nb < 0)
	{
	nb = -nb;
	write (1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnumber(nb/10);
	}
	digit = (nb % 10) + '0';
	write (1, &digit, 1);
}

int	main()
{
	ft_putnumber(666);
}
