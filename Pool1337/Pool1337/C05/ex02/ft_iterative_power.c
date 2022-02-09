/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:21:11 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/04 10:41:00 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power)
		{
			pow *= nb;
			power--;
		}
	}
	return (pow);
}
