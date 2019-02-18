/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:45:00 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 19:45:01 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	k;

	k = 0;
	if (n == 0)
		return (0);
	while (s1[k] == s2[k] && n - 1 > k && s1[k] && s2[k])
		k++;
	return ((unsigned char)s1[k] - (unsigned char)s2[k]);
}
