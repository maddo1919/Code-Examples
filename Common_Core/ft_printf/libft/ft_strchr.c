#include "libft.h"

char	*ft_strchr(const char *s, int c)	
{
	while (*s && (unsigned char)c != *s)
		s++;
	if ((unsigned char)c == *s)
		return ((char *)s);
	return (0);
}
