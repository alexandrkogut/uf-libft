/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:09:15 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 20:09:16 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	char		*str;
	int			sc;
	int			i;
	long long	c;

	sc = ft_symbol_count(n);
	str = (char *)malloc(sizeof(char) * sc + 1);
	c = (long long)n;
	i = 0;
	if (str == NULL)
		return (NULL);
	str[sc] = '\0';
	if (c < 0)
	{
		str[i++] = '-';
		c = -c;
	}
	while (sc > i)
	{
		str[sc - 1] = ((c % 10) + '0');
		c /= 10;
		sc--;
	}
	return (str);
}
