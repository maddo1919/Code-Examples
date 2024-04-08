#include<unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_alphabet(void)
{
	char a = 'A';

	while(a <= 'Z')
	{
		ft_putchar(a);
		a++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
