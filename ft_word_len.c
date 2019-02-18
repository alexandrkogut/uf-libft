/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:10:08 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 20:10:08 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_len(char const *str, char s)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[i] == s)
		i++;
	while (str[i] != s && str[i])
	{
		i++;
		l++;
	}
	return (l);
}
