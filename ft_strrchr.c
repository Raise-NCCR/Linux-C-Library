#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*last_c;

	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	last_c = (char *)malloc(sizeof(char) * 1);
	last_c = (char *) NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_c = (char *)s;
		s++;
	}
	return (last_c);
}
