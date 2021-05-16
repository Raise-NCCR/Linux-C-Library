#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;
	unsigned char	c_cpy;

	s_cpy = (unsigned char *)s;
	c_cpy = (unsigned char)c;
	while (n--)
	{
		if (*s_cpy == c_cpy)
			return (s_cpy);
		s_cpy++;
	}
	return (NULL);
}
