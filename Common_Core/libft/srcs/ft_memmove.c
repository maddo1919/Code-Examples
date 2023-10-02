#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *dst_ucp;
	unsigned char *src_ucp;

	dst_ucp = (unsigned char *)dest;
	src_ucp = (unsigned char *)src;
	if (!dest_ucp && !src_ucp)
		return (dst);
	if (src < dst)
		while (n--)
			dest_ucp[n] = src_ucp[n];
	else
		while (n--)
			*dst_ucp++ = *src_ucp++;
	return (dst);

}

