/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 18:19:41 by okogut            #+#    #+#             */
/*   Updated: 2018/12/23 18:19:42 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == chr)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
