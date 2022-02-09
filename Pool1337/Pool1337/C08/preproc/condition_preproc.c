/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_preproc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:08:55 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/10 14:14:04 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define S7AYBI 

int	main(void)
{
#if	defined S7AYBI < 10
	printf("Star Wars Suck!\n");
#elif S7AYBI < 20 
	printf("You are right!\n");
#else
	printf("GOT is king");
#endif
	return (0);
}
