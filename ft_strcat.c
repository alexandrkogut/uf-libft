/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 13:20:03 by okogut            #+#    #+#             */
/*   Updated: 2018/12/23 13:20:09 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *app)
{
	size_t	i;
	int		j;

	i = ft_strlen(dst);
	j = 0;
	while (j < ft_strlen(app))
		dst[i++] = app[j++];
	dst[i] = '\0';
	return (dst);
}
