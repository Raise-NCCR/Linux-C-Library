#include <unistd.h>

static int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*src_cpy;

	src_cpy = src;
	if (size != 0)
	{
		while (--size > 0)
		{
			*dest = *src_cpy++;
			if (*dest == '\0')
				break ;
			dest++;
		}
		if (size == 0)
			*dest = '\0';
	}
	return ((size_t)ft_strlen(src));
}
