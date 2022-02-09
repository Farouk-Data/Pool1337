/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifdef.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:17:31 by fech-cha          #+#    #+#             */
/*   Updated: 2021/10/10 14:21:11 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define TEST

int main(void)
{
#ifdef TEST
	printf("defined\n");
#ifndef FAROUK
	printf("Farouk Undefined\n");
#endif
#endif
	return (0);
}
