#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	if ((s1 == 0 && s2 == 0) || n == 0)
		return (0);
	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_cpy++ == *s2_cpy++)
			continue ;
		return (*--s1_cpy - *--s2_cpy);
	}
	return (0);
}
