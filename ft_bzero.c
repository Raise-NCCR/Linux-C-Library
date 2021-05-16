#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	char	*s_cpy;

	s_cpy = (char *)s;
	while (n--)
		*s_cpy++ = '\0';
}
