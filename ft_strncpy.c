/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 13:18:31 by okogut            #+#    #+#             */
/*   Updated: 2018/10/31 13:18:33 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (src[i] != '\0' && i != len)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	while (i != len)
	{
		*(dst + i) = '\0';
		i++;
	}
	return (dst);
}
