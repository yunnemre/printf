/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydinler <ydinler@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:16:57 by ydinler           #+#    #+#             */
/*   Updated: 2025/06/25 16:16:59 by ydinler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*ss;
	int		a;
	int 	b;
	void	*str= NULL;
	int i = 15;
	ss = "ssmigfer";
	a = ft_printf("yunn  %c %s %X %%\n",55, 0, -55, 0x55, str,i,str);
	b = printf("yunn  %c %s %X %%\n"	,55, 0, -55, 0x55, str,i,str);
	printf("a  %d\n%d", a, b);
	return (0);
}