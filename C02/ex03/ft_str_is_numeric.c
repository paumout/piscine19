int	ft_str_is_numeric(char *str)
{
	int i;
	i=0;
	
	while (str[i])
	{
	if (!(str >= 49 || str <= 57))
	{
		return 0;
	}
		i++;
	}
	return 1;
}
