#include <unistd.h>
#include <stdlib.h>

static int	nbrlen(int n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static int	power(int digit)
{
	int		powered;

	powered = 1;
	while (digit > 1)
	{
		powered *= 10;
		digit--;
	}
	return (powered);
}

char	*ft_itoa(int n)
{
	int		len;
	int		powered;
	char	*dest;

	len = nbrlen(n);
	dest = (char *)malloc(sizeof(char) * len);
	if (dest == 0)
		return ((char *) NULL);
	while (len > 0)
	{
		powered = power(len);
		*dest = '0' + n / powered;
		n %= powered;
		len--;
		dest++;
	}
	return (dest);
}
