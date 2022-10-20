/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:56:40 by loadjou           #+#    #+#             */
/*   Updated: 2022/05/04 11:46:41 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(char c, int *ptr)
{
	*ptr += write(1, &c, 1);
}

void	ft_putnb(int nb, int *ptr)
{
	if (nb <= 9 && nb >= 0)
		ft_print_char(nb + '0', ptr);
	else if (nb < 0)
	{
		if (nb <= -2147483648)
			*ptr += write(1, "-2147483648", 11);
		else
		{
			ft_print_char('-', ptr);
			nb /= -1;
			ft_putnb(nb, ptr);
		}
	}
	else
	{
		ft_putnb(nb / 10, ptr);
		ft_putnb(nb % 10, ptr);
	}
}
