#include <unistd.h>
#include <stdlib.h>

static unsigned int	ft_strlen(const char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * len + 1);
	if (dest == 0)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return (dest);
	s += start;
	if (len != 0)
	{
		while (--len > 0)
		{
			*dest = (char)*s++;
			if (*dest == '\0')
				break;
			dest++;
		}
		if (len == 0 && *dest != '\0')
			dest = '\0';
	}
	return (dest);
}
