/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:49:30 by loadjou           #+#    #+#             */
/*   Updated: 2022/05/04 19:07:42 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format(char c, int *ptr, va_list args)
{
	if (c == 'c')
		ft_puttchar(va_arg(args, int), ptr);
	else if (c == 's')
		ft_puttstr((char *)va_arg(args, void *), ptr);
	else if (c == 'p')
	{
		*ptr += write(1, "0x", 2);
		ft_putptr((unsigned long int)va_arg(args, void *), ptr);
	}	
	else if ((c == 'd') || c == 'i')
		ft_putnb(va_arg(args, int), ptr);
	else if (c == 'x' || c == 'X')
		ft_puthex(c, va_arg(args, unsigned int), ptr);
	else if (c == 'u')
		ft_puthex(c, (unsigned int)va_arg(args, void *), ptr);
	else if (c == '%')
		*ptr += write(1, "%", 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			format(s[++i], &counter, args);
		else
			ft_puttchar(s[i], &counter);
		i++;
	}
	va_end(args);
	return (counter);
}
