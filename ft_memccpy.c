#include <unistd.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	c_cpy;
	unsigned char	*d_cpy;
	const unsigned char	*s_cpy;

	if (n == 0)
		return (NULL);
	d_cpy = (unsigned char *)dest;
	s_cpy = (const unsigned char *)src;
	c_cpy = (unsigned char)c;
	while (n--)
	{
		*d_cpy++ = *s_cpy++;
		dest++;
		if (*(s_cpy - 1) == c_cpy)
		{
			s_cpy++;
			return (dest);
		}
	}
	return (NULL);
}
