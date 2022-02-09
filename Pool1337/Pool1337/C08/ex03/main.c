/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:30:12 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/10 18:50:57 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point -> x = 13;
	point -> y = 37;
}

int		main(void)
{
	t_point		pt;
	set_point(&pt);
	printf("%d%d\n",pt.x,pt.y);
	return (0);
}
