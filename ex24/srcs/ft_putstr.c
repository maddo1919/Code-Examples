#include<unistd.h>
#include"ft_putstr.h"
#include"ft_putchar.h"

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
