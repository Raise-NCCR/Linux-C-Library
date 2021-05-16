/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	while (*s1_cpy != '\0' && n-- > 0)
	{
		if (*s1_cpy == *s2_cpy)
		{
			s1_cpy++;
			s2_cpy++;
			continue ;
		}
		return ((int)(*s1_cpy - *s2_cpy));
	}
	if (n > 0 && *s2_cpy != '\0')
		return ((int)(*s1_cpy - *s2_cpy));
	return (0);
}
