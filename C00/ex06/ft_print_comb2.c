#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb2(void)
{
	char i;
	char k;

	i=0;
	k=0;
	while (i<99)
	{
		k= i+ 1;
		while (k<100)
		{
			ft_putchar(i/10 + '0');
			ft_putchar(i%10 + '0');
			
			ft_putchar(' ');
			ft_putchar(k/10 + '0');
			ft_putchar(k%10 + '0');
			
			if ((i/10 !=9) || (i%10 !=8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			k++;
		}i++;
	}
	ft_putchar('\n');
}
