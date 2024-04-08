#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

int	ft_strcmp(char *s1, char *s2)
{
	return (ft_strlen(s1) - ft_strlen(s2));
}

int	main(void)
{
	printf("%d",ft_strcmp("hello","hi"));
}
