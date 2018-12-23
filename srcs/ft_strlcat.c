/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 15:28:59 by okogut            #+#    #+#             */
/*   Updated: 2018/12/23 15:29:00 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n) {
	size_t	i;
	size_t	j;
	size_t	s1l;
	size_t	s2l;

	s1l = ft_strlen(dst);
	s2l = ft_strlen(src);
    i = 0;
    j = s1l;
    if (n < s1l + 1)
        return (s2l + n);
    if (n > s1l + 1)
    {
        while (j < n - 1)
        {
            dst[j] = src[i];
            j++;
            i++;
        }
        dst[j] = '\0';
    }
    return (s1l + s2l);
}
