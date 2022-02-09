/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 08:55:47 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/09 09:48:50 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*tab;
	int				i;	

	i = 0;
	tab = NULL;
	tab = malloc((max - min) * sizeof(int *));
	if (max <= min || tab == NULL)
	{
		return (tab);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tmp);
}
/*
#include <stdio.h>
int main()
{
	int *arr;
	arr = ft_range(-100,-50);
	for(int i = 0; i < 20;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return (0);
}*/
