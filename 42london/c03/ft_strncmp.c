#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	

	while ((s1[i] != '\0' || s2[i] != '\0')
			&& i <= n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	
	return (0);

}

int	main()
{
	printf("%d", ft_strncmp("Hello", "Hello1", 2));
	printf("\n%d", ft_strncmp("Hello", "He", 3));
	printf("\n%d", ft_strncmp("He", "Hello", 3));
	printf("\n%d", ft_strncmp("Hello", "Hello", 5));
}
