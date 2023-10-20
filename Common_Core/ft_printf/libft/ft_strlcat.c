#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_src;
	size_t	len_dest;
	size_t	j_dest;
	size_t	i;

	len_src = ft_strlen(src);
	if (dst)
		len_dest = ft_strlen(dst);
	else
		len_dest = 0;
	j_dest = len_dest;
	i = 0;
	if (size == 0 || size < len_dest)
		return (len_src + size);
	while (src[i] != '\0' && j_dest < (size -1))
	{
		dst[j_dest] = src[i];
		j_dest++;
		i++;
	}
	dst[j_dest] = '\0';
	return (len_dest + len_src);
}
