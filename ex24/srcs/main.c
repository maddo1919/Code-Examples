#include<unistd.h>
#include<stdio.h>
#include"ft_putchar.h"
#include"ft_putstr.h"
#include"ft_strlen.h"
#include"ft_strcmp.h"
#include"ft_swap.h"


int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putstr(argv[1]);
		write(1,"\n",1);
		printf("%d",ft_strlen(argv[1]));	
	}
}
