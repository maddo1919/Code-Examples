#include<unistd.h>

void	ft_print_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
int	main(void)
{
	char words [] = "hello";
	ft_print_string(words);
	return (0);
}
