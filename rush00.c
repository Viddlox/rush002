#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_manager(int x, char start, char mid, char end)
{
	ft_putchar(start);
	x--;
	while (x > 1)
	{
		ft_putchar(mid);
		x--;
	}
	if (x > 0)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_manager(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			ft_print_manager(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
			ft_print_manager(x, 'o', '-', 'o');
	}
}