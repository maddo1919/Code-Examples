#include<unistd.h>
#include<stdio.h>


int	ft_println(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
int	main()
{
	char test [] = "hello";
	printf("%d",(ft_println(test)));
}
