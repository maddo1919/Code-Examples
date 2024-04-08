#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *dst_ucp;
	unsigned char *src_ucp;

	dst_ucp = (unsigned char *)dst;
	src_ucp = (unsigned char *)src;
	if (!dst_ucp && !src_ucp)
		return (dst);
	if (src < dst)
		while (n--)
			dst_ucp[n] = src_ucp[n];
	else
		while (n--)
			*dst_ucp++ = *src_ucp++;
	return (dst);

}

