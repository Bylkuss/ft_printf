/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:22:46 by loadjou           #+#    #+#             */
/*   Updated: 2022/05/04 11:46:09 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_puttchar(char c, int *ptr);
void	ft_puttstr(char *s, int *ptr);
void	ft_putptr(unsigned long int nb, int *ptr);
void	ft_putnb(int nb, int *ptr);
void	ft_print_char(char c, int *ptr);
void	ft_putnb(int nb, int *ptr);
void	ft_puthex(char c, unsigned int nb, int *ptr);
int		ft_printf(const char *s, ...);
#endif