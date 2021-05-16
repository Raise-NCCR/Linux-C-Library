#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int main() {
	int len = ft_strlen("abcde");
	printf("%d", len);
	return 0;
}