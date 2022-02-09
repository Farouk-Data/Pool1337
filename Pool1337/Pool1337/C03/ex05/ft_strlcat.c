/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:46:14 by fech-cha          #+#    #+#             */
/*   Updated: 2021/09/30 15:57:50 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;

	len_d = 0;
	len_s = 0;
	while (dest[len_d])
		len_d++;
	while (src[len_s])
		len_s++;
	if (size <= len_d)
		len_s = len_s + size;
	else
		len_s = len_s + len_d;
	i = 0;
	while (src[i] != '\0' && len_s + 1 < size)
	{
		dest[len_d] = src[i];
		len_d++;
		i++;
	}
	dest[len_d] = '\0';
	return (len_s);
}
