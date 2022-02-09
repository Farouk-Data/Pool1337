/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:38:36 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/05 09:39:35 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1 || (nb % 2 == 0 && nb != 2))
		return (0);
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}