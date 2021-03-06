static int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1024);
	else
		return (0);
}

static int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1024 || ft_isdigit(c) == 1024)
		return (1024);
	else
		return (0);
}
