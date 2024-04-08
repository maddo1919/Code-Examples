
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p_dest;
	const char	*p_src;
	size_t	i;

	if(!src && !dst)
		return (NULL);
	p_dest = (char *)dst;
	p_src = (char *)src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dst);
}
