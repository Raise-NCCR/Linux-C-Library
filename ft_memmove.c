#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s_cpy;
	char	*d_cpy;

	if ((dest == 0 && src == 0) || n == 0)
		return (dest);
	s_cpy = (const char *)src;
	d_cpy = (char *)dest;
	if (dest > src)
	{
		s_cpy += n - 1;
		d_cpy += n - 1;
		while (n--)
			*d_cpy-- = *s_cpy--;
		return (dest);
	}
	while (n--)
		*d_cpy++ = *s_cpy++;
	return (dest);
}
