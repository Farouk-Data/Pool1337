/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:49:13 by fech-cha          #+#    #+#             */
/*   Updated: 2021/09/26 15:11:33 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b ;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swapped;

	i = 0;
	swapped = 0;
	while (i < size - 1)
	{
		j = 0 ;
		swapped = 0;
		while (j < size - i - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				swap(&tab[j], &tab[j + 1]);
				swapped = 1;
			}
			++j;
		}
		if (swapped == 0)
		{
			break ;
		}
		++i;
	}
}
#include <stdio.h>
int main()
{
	int arr[6] = {5,9,0,4,3,-1};

	ft_sort_int_tab(arr,6);
	for(int i=0;i<6;++i)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");


}
