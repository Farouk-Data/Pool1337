/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:18:30 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/05 09:51:28 by fech-cha         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	p;
	int	found;

	p = nb;
	found = 0;
	if (nb <= 1)
	{
		return (2);
	}
	while (!found)
	{
		if (ft_is_prime(p))
		{
			found = 1;
			nb = p;
		}
		p++;
	}
	return (nb);
}
