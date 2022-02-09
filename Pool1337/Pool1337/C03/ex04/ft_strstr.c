/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:52:27 by fech-cha          #+#    #+#             */
/*   Updated: 2021/09/30 07:31:15 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str)
	{
		str++;
		cpt++;
	}
	return (cpt);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		length;

	i = 0;
	j = 0;
	length = ft_strlen(to_find);
	if (length == 0)
		return (str);
	while (str[i])
	{
		while (to_find[j] == str [i + j])
		{
			if (j + 1 == length)
			{
				return (str + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
