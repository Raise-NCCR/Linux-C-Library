#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d_cpy;
	const char	*s_cpy;

	if (dest == 0 && src == 0)
		return (dest);
	d_cpy = (char *)dest;
	s_cpy = (const char *)src;
	while (n--)
		*d_cpy++ = *s_cpy++;
	return (dest);
}
