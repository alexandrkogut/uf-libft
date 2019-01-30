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

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;

	while (s[l - 1] == ' ' || s[l - 1] == '\t' || s[l - 1] == '\n')
		l--;

	return (ft_strsub(s, i, l - i));
}
