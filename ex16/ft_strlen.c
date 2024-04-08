#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int i = 1;
	while(argv[i])
	{
		printf("%d",ft_strlen(argv[i]));
			i++;
	}
	return (0);
}
