/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:10:05 by danierod          #+#    #+#             */
/*   Updated: 2022/03/17 15:22:46 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	g_c;

int		ft_format(char a, va_list var);
int		ft_printf(const char *string, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int i);
int		ft_pp(unsigned long arg_num, char *s);
int		ft_uh(unsigned int arg_num, char *s);
int		ft_numlen(int n);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);

#endif
