#include <unistd.h>

static int	ft_strlen(char *s)
{
	int		len;

	len = 0;
	if (*s == '\0')
		return (0);
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
