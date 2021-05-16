#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
		write(fd, "-", 1);
	if (n < 0)
		write(fd, &"0123456789"[n * -1], 1);
	else
		write(fd, &"0123456789"[n], 1);
}
