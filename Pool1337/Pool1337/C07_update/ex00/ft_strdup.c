/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:32:27 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/09 09:46:45 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
/*
#include <stdio.h>

int main()
{
	char source[] = "Futur is loading!";

	char *target = ft_strdup(source);
	printf("%s\n",target);
}*/
