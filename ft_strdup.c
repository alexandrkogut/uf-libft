/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 12:06:11 by okogut            #+#    #+#             */
/*   Updated: 2018/10/31 12:06:13 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dst;
	size_t	i;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		*(dst + i) = *(str + i);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
