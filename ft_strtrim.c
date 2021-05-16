#include <unistd.h>
#include <stdlib.h>

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static int	is_in_set(const char c, const char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*dest;
	char	*dest_cpy;

	while (*s1 != '\0')
	{
		if (is_in_set(*s1, set))
			s1++;
		else
			break ;
	}
	i = ft_strlen(s1);
	while (--i && is_in_set(s1[i], set))
		;
	dest = (char *)malloc(sizeof(char) * (++i + 1));
	if (dest == 0)
		return (dest);
	if (i == 0)
	{
		*dest = '\0';
		return (dest);
	}
	dest_cpy = dest;
	while (i--)
		*dest++ = *s1++;
	*dest = '\0';
	return (dest_cpy);
}
