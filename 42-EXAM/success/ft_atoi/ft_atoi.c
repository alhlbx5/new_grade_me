int	ft_atoi(const char *str)
{
	int i = 0;
	int j = 0;
	while ((*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	(*str == '+' || *str == '-') && (j = *(str++));
	while (*str >= '0' && *str <= '9')
		i = (i * 10) + (*(str++) - 48);
	return (i * (((2 * (j == '-')) - 1) * -1));
}