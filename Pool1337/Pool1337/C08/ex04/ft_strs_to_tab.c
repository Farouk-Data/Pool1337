/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:12:09 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/11 13:26:38 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str)
	{
		cpt++;
		str++;
	}
	return (cpt);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*tmp;

	dest = NULL;
	tmp = NULL;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	tmp = dest;
	if (dest == NULL)
		return (NULL);
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}	

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ptr;
	int			i;

	i = 0;
	ptr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = ft_strdup(av[i]);
		ptr[i].copy = ft_strdup(av[i]);
		i++;
	}
	ptr[i].str = NULL;
	return (ptr);
}
/*

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
}*/
