#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len_src;
	size_t	i;

	len_src = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (len_src);
	while (src[i] != '\0' && i < (size -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
