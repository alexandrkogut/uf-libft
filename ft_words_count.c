/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:10:08 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 20:10:08 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_words_count(char const *str, char s)
{
	int cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == s)
			i++;
		if (str[i] != s && str[i] != '\0')
			cnt++;
		while (str[i] != s && str[i] != '\0')
			i++;
	}
	return (cnt);
}
