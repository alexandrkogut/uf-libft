/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:57:31 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 19:57:32 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*n_str;
	size_t	i;

	i = 0;
	if (s && f)
	{
		n_str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (n_str == NULL)
			return (NULL);
		while (i < ft_strlen(s))
		{
			n_str[i] = f(i, s[i]);
			i++;
		}
		n_str[i] = '\0';
		return (n_str);
	}
	return (NULL);
}
