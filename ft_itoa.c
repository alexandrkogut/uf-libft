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

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	int				sc;
	int				i;
	unsigned int	nn;

	sc = ft_symbol_count(n);
	str = (char *)malloc(sizeof(char) * sc + 1);
	if (str == NULL)
		return (NULL);
	str[sc] = '\0';
	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		nn = -(unsigned int)n;
	}
	else
		nn = (unsigned int)n;
	while (sc > i)
	{
		str[sc - 1] = ((nn % 10) + '0');
		nn = nn / 10;
		sc--;
	}
	return (str);
}
