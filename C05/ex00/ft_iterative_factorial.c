int ft_iterative_factorial(int nb)
{
	int i;

	if (nb < 1)
		return (0);
	i = nb;
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
