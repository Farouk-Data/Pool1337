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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
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
	int		sep_total;
	char	*new_str;
	int		total_strs;
	int		new_str_size;

	if (strs == NULL || sep == NULL)
		return (NULL);
	i = 0;
	total_strs = 0;
	sep_total = (size - 1) * ft_strlen(sep);
	while (i < size)
	{
		total_strs += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	new_str_size = total_strs + sep_total + 1;
	new_str = malloc(new_str_size);
	if (new_str == NULL)
	{
		return (NULL);
	}
	new_str[0] = '\0';
	new_str[new_str_size] = '\0';
	while (i < size)
	{
		ft_strcat(new_str, strs[i]);
		if (i != (size - 1))
			ft_strcat(new_str, sep);
		i++;
	}
	return (new_str);
}

/*
#include <stdio.h>

int main()
{
	char	*arrStr[] = {"Future" , "is" , "Loading" , "!"};
	char	*result = ft_strjoin(4,arrStr," ");

	printf("%s\n",result);
}*/
