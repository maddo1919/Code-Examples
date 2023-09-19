#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a % b;
	printf("%d"div);
	printf("%d",mod);
}

int	main(void)
{
	int *div = 0;
	int *mod = 0;
	ft_div_mod(9,3,&div,&mod);
}
