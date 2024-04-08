#include<unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_numbers(void)
{
	char zero = '0';

	while(zero <= '9')
	{
		ft_putchar(zero);
		zero++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
