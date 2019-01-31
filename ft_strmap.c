/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:58:21 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 19:58:21 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*n_str;
	int		i;

	i = -1;
	if (s && f)
	{
		n_str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (n_str == NULL)
			return (NULL);
		while (++i < ft_strlen(s))
			n_str[i] = f(s[i]);
		n_str[i] = '\0';
		return (n_str);
	}
	return (NULL);
}
