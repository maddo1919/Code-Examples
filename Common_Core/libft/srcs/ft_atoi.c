#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	/*signal converts negative to positive*/
	int	result;

	i = 0;
	signal = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
			i++;
	/*while number is greater or equal to 9 and less than 13 or whitespace 
	 go forwards*/
	if (nptr[i] == 43 || nptr[i] == 45)
	/*if number is plus or minus*/
	{
		if (nptr[i] == 45)
		/*if negative signal equals negative value*/
			signal = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * signal);	
}
