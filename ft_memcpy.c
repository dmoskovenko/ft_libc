

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = dest;
	s2 = src;
	while (n--)
		*s1++ = *s2++;
	return (dest);
}
