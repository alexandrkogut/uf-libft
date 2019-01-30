/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:30:52 by okogut            #+#    #+#             */
/*   Updated: 2018/10/31 09:32:12 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*n_str;
	size_t	i;

	i = 0;
	n_str = malloc(sizeof(char) * len + 1);
	if (!n_str || !s || (!n_str && !s))
		return (NULL);
	while (len > 0)
	{
		n_str[i] = s[start];
		i++;
		start++;
		len--;
	}
	n_str[i] = '\0';
	return (n_str);
}
