#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while(argv[i])
	{
		ft_putstr(argv[i]);
		write(1,"\n",1);
		i++;
	}
	return(0);
}