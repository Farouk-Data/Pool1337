/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:27:54 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/09 21:05:36 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char **strs, int size)
{
	int i;
	int j;
	int cpt;

	j = 0;
	i = 0;
	cpt = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			cpt++;
		}
		i++;
	}
	return (cpt);

}

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*new;
	int		sep_len;

	sep_len = 0;
	i = 0;
	if (size == 0)
	{
		new = malloc(1);
		*new = 0;
		return (dest);
	}
	while (sep[sep_len] != '\0')
		sep_len++;
	dest = (char *)malloc(ft_strlen(strs, size) + ((size - 1) * sep_len) + 1);
	*dest = 0;
	if (dest == 0)
		return (0);
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i + 1 != size)
			dest = ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

