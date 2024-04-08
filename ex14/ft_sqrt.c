#include<stdio.h>
#include<unistd.h>

int	ft_sqrt(int nb)
{
	int	i = 0;
	
	if (nb == 1)
		return (1);
	else if (nb < 1)
		return (0);
	else
		while(i < nb)
		{
			if (i * i == nb)
				return (i);
		i++;
		}
	return(0);

}

int	main(void)
{
	printf("%d",ft_sqrt(9));
	printf("\n");
	printf("%d",ft_sqrt(3));
	printf("\n");
	printf("%d",ft_sqrt(25));
	printf("\n");
	printf("%d",ft_sqrt(-15));
}
