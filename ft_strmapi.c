#include <stdlib.h>
#include <unistd.h>

static int	ft_strlen(const char *str)
{
	int		i;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dest == 0)
		return ((char *) NULL);
	while (s[i] != '\0')
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}
