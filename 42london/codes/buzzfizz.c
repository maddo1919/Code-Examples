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

int	main(void)
{
	int number;    
	
	number = 1;
	while (number <= 100)
	{
		if (number % 4 != 0 && number % 7 != 0)
        {
          ft_putnumber(number);
          write (1, "\n", 1);
        }        
	if (number % 4 == 0 && number % 7 != 0)
        {
            write (1, "buzz", 4);
            write (1, "\n", 1);
        }
        if (number % 7 == 0 && number % 4 != 0)
        {
            write (1, "fizz", 4);
            write (1, "\n", 1);
        }
        if (number % 7 == 0 && number % 4 == 0)
        {
            write(1, "buzzfizz\n", 10);
        }
        number ++;
	}
	return (0);
}
