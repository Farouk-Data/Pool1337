/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 09:11:37 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/09 21:05:33 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	size;
	int				i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = (int *)malloc(size * sizeof(int *));
		if (*range == NULL)
			return (-1);
		while (min < max)
		{
			*((*range) + i) = min;
			min++;
			i++;
		}
	}
	return (size);
}

#include <stdio.h>

int main()
{
	int *range;
	printf("%d\n",ft_ultimate_range(&range,-100,100));
}
