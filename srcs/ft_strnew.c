/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:58:43 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 19:58:43 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = ft_memalloc(size + 1);
	if (str)
	{
		i = 0;
		while (size + 1 > i)
			str[i++] = '\0';
		return (str);
	}
	return (NULL);
}
