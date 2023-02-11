/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:57:33 by mcheng            #+#    #+#             */
/*   Updated: 2023/02/11 00:57:33 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int	X, int	y);

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	if (*str >= 48 || *str <= 57)
	{
		while (*str >= 48 || *str <= 57)
		{
			if ((*str >= 9 && *str <= 13) || *str == 32)
			{
				write(1, "Please insert printable characters", 34);
				return(-1);
			}
			if (*str == 45)
			{
				write(1, "Please insert positive integers", 31);
				return(-1);
			}
			result *= 10;
			result += *str - 48;
			i++;
		}
		return (result);
	}
	else
	{
		write(1,"Please insert valid coordinates", 31);
		return(-1);
	}
}

int	main(int	ac, char	*argv[])
{
	int	x_column;
	int	y_row;

	x_column = 5;
	y_row = 5;
	if (ac == 1)
		rush(x_column, y_row)
	else if(ac == 3)
	{
		x_column = ft_atoi(av[1]);
		y_row = ft_atoi(av[2]);
		if (x_column < 0 || y_row < 0)
			write(1, "Please insert valid coordinates", 31);
		else
		{
			rush(x_column, y_row);
			return (0);
		}
	}
	else
		write(1, "Please insert valid coordinates", 31);
}