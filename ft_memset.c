#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_cpy;

	s_cpy = (unsigned char *)s;
	while (n--)
		*s_cpy++ = (unsigned char)c;
	return (s);
}
