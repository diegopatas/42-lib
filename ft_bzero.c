/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:02:41 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/19 17:21:05 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *struc, size_t size)
{
	void	*aux;

	aux = struc;
	while (size > 0)
	{
		*(char *)struc = 0;
		struc++;
		size--;
	}
	struc = aux;
}
