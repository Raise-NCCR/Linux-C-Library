#include <unistd.h>
#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	char	*s_cpy;

	s_cpy = (char *)s;
	while (n--)
		*s_cpy++ = '\0';
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	dest = malloc(size * nmemb);
	if (dest == 0)
		return (dest);
	ft_bzero(dest, nmemb * size);
	return (dest);
}
