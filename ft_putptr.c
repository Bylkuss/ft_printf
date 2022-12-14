/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:52:31 by loadjou           #+#    #+#             */
/*   Updated: 2022/05/04 11:30:43 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long int nb, int *ptr)
{
	if (nb >= 16)
		ft_putptr(nb / 16, ptr);
	*ptr += write(1, &"0123456789abcdef"[nb % 16], 1);
}
