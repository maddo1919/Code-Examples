# include "libft.h"

int main (void)
{
	char *str = "matthew";
	int	i = 0;
	while (str[i])
	{
		ft_putchar_fd((ft_toupper(str[i])),1);
		i++;
	}
	
}
