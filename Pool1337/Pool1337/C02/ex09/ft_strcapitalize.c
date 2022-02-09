/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:32:13 by fech-cha          #+#    #+#             */
/*   Updated: 2021/09/28 11:04:57 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (tmp);
}

char	*ft_strcapitalize(char *str)
{
	int		track_start;
	char	*hold;

	hold = str;
	track_start = 1;
	str = ft_strlowcase(str);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (track_start == 1)
				*str = *str - 32;
			track_start = 0;
		}
		else if (*str >= '0' && *str <= '9')
		{
			track_start = 0;
		}
		else
		{
			track_start = 1;
		}
		str++;
	}
	return (hold);
}
