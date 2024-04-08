#include<stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;
	int	k;


	i = 0;
	while(i < length)
	{
		f(tab[i]);
		k += tab[i];
		i++;
	}
	f(k);
}

void	print_number(int n)
{
	printf("%d\n",n);
}


int	main(void)
{
	int arr[] = {1,2,3,4,5};
	int length = sizeof(arr)/ sizeof(arr[0]);

	ft_foreach(arr,length,print_number);

	return(0);
}
