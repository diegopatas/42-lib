/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:13:44 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/29 13:25:00 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!*str) 
		return (NULL);
	while (*str && *str != c)
	{
		str++;
		if (*str == c)
			return ((char *)str);
	}
	return (NULL);
}
