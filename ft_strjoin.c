/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:56:19 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 19:57:09 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n_str;
	size_t	i;

	i = 0;
	if ((s1 == NULL && s2 == NULL) || s1 == NULL || s2 == NULL)
		return (NULL);
	n_str = (char*)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (n_str == NULL)
		return (NULL);
	if (ft_strlen(s1) != 0 || ft_strlen(s2) != 0)
	{
		while (*s1)
			n_str[i++] = *(s1)++;
		while (*s2)
			n_str[i++] = *(s2)++;
	}
	n_str[i] = '\0';
	return (n_str);
}
