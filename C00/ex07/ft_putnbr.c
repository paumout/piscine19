#include <unistd.h>
void 	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nbr)
{
		char c;
		if (nb < 0)
		{
				nbr = -nbr;
			   ft_putchar('-');
		}
		if (nbr < 10)
				ft_putchar(nbr + '0');
		else
		{ 
				ft_putnbr(nbr / 10);
				ft_putnbr(nbr % 10);
		}
}
