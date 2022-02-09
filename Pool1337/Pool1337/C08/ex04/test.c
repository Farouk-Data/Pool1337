/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:23:46 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/11 13:34:26 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int		n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		n;
	int		l;

	l = 0;
	n = 0;
	while (src[l])
		l++;
	ptr = malloc(sizeof(src) * l + 1);
	if (ptr == NULL)
		return (NULL);
	while (src[n])
	{
		ptr[n] = src[n];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		if (tab[i].str == NULL || tab[i].copy == NULL)
			return (NULL);
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		tab[i].str = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	t_stock_str *arr = ft_strs_to_tab(argc,argv);
	int i = 0;
	while ( i < argc)
	{
		printf("%s\n",arr[i].str);
		i++;
	}
	return (0);
}
