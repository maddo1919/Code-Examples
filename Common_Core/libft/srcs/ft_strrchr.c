#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	unsigned char	uc;

	ptr = NULL;
	uc = (unsigned char)c;
	while (*s)
	{
	 	if (*s == uc)
			ptr = s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return((char *)ptr);
}
