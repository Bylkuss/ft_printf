/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:54:38 by loadjou           #+#    #+#             */
/*   Updated: 2022/05/04 11:31:08 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(char c, unsigned int nb, int *ptr)
{
	unsigned int	base;

	base = 10;
	if (c == 'X' || c == 'x')
		base = 16;
	if (nb >= base)
		ft_puthex(c, (nb / base), ptr);
	if (c == 'x')
		*ptr += write(1, &"0123456789abcdef"[nb % base], 1);
	else if (c == 'X')
		*ptr += write(1, &"0123456789ABCDEF"[nb % base], 1);
	else
		*ptr += write(1, &"0123456789"[nb % base], 1);
}
