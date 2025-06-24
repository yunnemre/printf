/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydinler <ydinler@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:40:59 by ydinler           #+#    #+#             */
/*   Updated: 2025/06/22 15:41:05 by ydinler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>

# define HEX_UP "0123456789ABCDEF"
# define HEX_DOWN "0123456789abcdef"
# define DECIMAL "0123456789"

int		ft_printf(const char *format, ...);
int		ft_check_persent(char c, va_list args);
int		ft_putstr(va_list args, int mod);
int	    ft_itoa_man(va_list arg, char *base, char fmt);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
#endif