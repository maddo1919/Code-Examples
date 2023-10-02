#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptsr;

	i = 0;
	ptsr = (unsigned char *)s;
	while (i < n)
	{
		ptsr[i] = c;
		i++;
	}
	return (ptsr);
}
