/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:03:59 by okogut            #+#    #+#             */
/*   Updated: 2018/10/23 17:29:59 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void	ft_memset_test()
{
	int		i;
	char	m[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '0', '0', '0', '0'};
	char	m_w[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '0', '0', '0', '0'};

	printf("----- ft_memset test\nm - original, m_w - ft\n");
	i = 0;
	while (i < 15)
	{
		printf("m: %c", m[i]);
		printf(" m_w: %c\n", m_w[i]);
		i++;
	}
	
	ft_memset(m, 'o', 12);
	memset(m_w, 'o', 12);
	
	printf("after memset\n");
	
	i = 0;
	while (i < 15)
	{
		printf("m: %c", m[i]);
		printf(" m_w: %c\n", m_w[i]);
		i++;
	}
}

void	ft_bzero_test()
{
	int		i;
	int	m[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '0', '0', '0', '0'};
	int	m_w[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '0', '0', '0', '0'};

	printf("----- ft_bzero test\nm - original, m_w - ft\n");
	i = 0;
	while (i < 15)
	{
		printf("m: %c", m[i]);
		printf(" m_w: %c\n", m_w[i]);
		i++;
	}
	
	ft_bzero(m, 12);
	bzero(m_w, 12);
	
	printf("after bzero\n");
	
	i = 0;
	while (i < 15)
	{
		printf("m: %c", m[i]);
		printf(" m_w: %c\n", m_w[i]);
		i++;
	}
}

void	ft_memcpy_test()
{
	char	src[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '0', '0', '0', '0'};
	char	m[15];
	char	m_w[15];
	int		i;

	ft_memcpy(m, src, 5);
	memcpy(m_w, src, 5);

	i = 0;
	while (i < 15)
	{
		printf("src: %c", src[i]);
		printf(" m: %c", m[i]);
		printf(" m_w: %c\n", m_w[i]);
		i++;
	}
}

void	ft_memccpy_test()
{
	char	src[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '0', '0', '0', '0'};
	char	m[15];
	char	m_w[15];
	int		i;

	ft_memccpy(m, src, '2', 5);
	memccpy(m_w, src, '2', 5);

	i = 0;
	while (i < 15)
	{
		printf("src: %c", src[i]);
		printf(" m: %c", m[i]);
		printf(" m_w: %c\n", m_w[i]);
		i++;
	}
}

void	ft_memmove_test()
{
	char	src[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '0', '0', '0', '0'};
	char	m[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '0', '0', '0', '0'};
	char	m_w[15]  = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '0', '0', '0', '0'};
	int		i;

	ft_memmove(&m_w[4], &m_w[3], 2);
	memmove(&m[4], &m[3], 2);

	i = 0;
	while (i < 15)
	{
		printf("src: %c", src[i]);
		printf(" m: %c", m[i]);
		printf(" m_w: %c\n", m_w[i]);
		i++;
	}
}

void	ft_memchr_test()
{
	char	src[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '4', '0', '0', '0'};
	char	src1[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '4', '0', '0', '0'};
	char	*s_w;
	char	*s;
	int		i;

	s_w = ft_memchr(src1, '4', 5);
	s = memchr(src, '4', 5);

	i = 0;
	while (i < 15)
	{
		printf("src: %c ", src1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 15)
	{
		printf("sr1: %c ", src1[i]);
		i++;
	}
	
	if (s_w != NULL)
		s_w[0] = '!';
	if (s != NULL)
		s[0] = '!';

	printf("\n\n");
	i = 0;
	while (i < 15)
	{
		printf("src: %c ", src[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 15)
	{
		printf("sr1: %c ", src1[i]);
		i++;
	}
}

void	ft_memcmp_test()
{
	char	src[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '4', '0', '0', '0'};
	char	src1[15] = {'0', '1', '6', '3', '4', '5', '6', '7', '8', '9', '0', '4', '0', '0', '0'};
	int		s;
	int		s_w;

	s = memcmp(src, src1, 5);
	s_w = ft_memcmp(src, src1, 5);

	printf("s: %i s_w: %i", s, s_w);
}

void	ft_strdup_test()
{
	char	src[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '4', '0', '0', 'p'};
	char	*p_w;
	char	*p;

	p_w = ft_strdup(src);
	p = strdup(src);

	printf("%s\n", p_w);
	printf("%s\n", p);
}

void	ft_strcpy_test()
{
	char	src[15] = {'0', '1', '2', '3', '\0', '5', '6', '7', '8', '9', '0', '4', '0', '0', '\0'};
	char	dst[15];

	ft_strcpy(dst, src);
	// strcpy(dst, src);

	printf("%s\n", src);
	printf("%s\n", dst);
}

void	ft_strncpy_test()
{
	char	src[15] = {'0', '1', '2', '3', '\0', '5', '6', '7', '8', '9', '0', '4', '0', '0', '\0'};
	char	dst[15];
	char	src1[15] = {'0', '1', '2', '3', '\0', '5', '6', '7', '8', '9', '0', '4', '0', '0', '\0'};
	char	dst1[15];

	ft_strncpy(dst, src, 8);
	strncpy(dst1, src1, 8);

	printf("%s\n", src);
	printf("%s\n\n", dst);

	printf("%s\n", src1);
	printf("%s\n", dst1);
}

void	ft_strcat_test()
{
	char	dst[30] = {'0', '1', '2', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	char	app[7] = {'a', 'p', 'p', 'e', 'n', 'd', '\0'};
	char	dst1[30] = {'0', '1', '2', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	char	app1[7] = {'a', 'p', 'p', 'e', 'n', 'd', '\0'};

	ft_strcat(dst, app);
	strcat(dst1, app1);

	printf("%s\n", dst);
	printf("%s\n", dst1);
}

void	ft_strncat_test()
{
	char	dst[30] = {'0', '1', '2', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	char	app[7] = {'a', 'p', 'p', 'e', 'n', 'd', '\0'};
	char	dst1[30] = {'0', '1', '2', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	char	app1[7] = {'a', 'p', 'p', 'e', 'n', 'd', '\0'};

	ft_strncat(dst, app, 3);
	strncat(dst1, app1, 3);

	printf("%s\n", dst);
	printf("%s\n", dst1);
}

void	ft_strlcat_test()
{
	char	dst[30] = {'0', '1', '2', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	char	app[7] = {'a', 'p', 'p', 'e', 'n', 'd', '\0'};
	char	dst1[30] = {'0', '1', '2', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	char	app1[7] = {'a', 'p', 'p', 'e', 'n', 'd', '\0'};

	printf("%zu\n", ft_strlcat(dst, app, 16));
	printf("%s\n", dst);
	printf("%lu\n", strlcat(dst1, app1, 16));
	printf("%s\n", dst1);
}

void	ft_strchr_test()
{
	char	str[30] = {'0', '1', '2', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	
	char *f1 = ft_strchr(str, '1');
	char *f2 = strchr(str, '1');

	printf("%s\n", f1);
	printf("%s\n", f2);
}

void	ft_strrchr_test()
{
	char	str[30] = {'0', '1', '6', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	
	char *f1 = ft_strrchr(str, '6');
	char *f2 = strrchr(str, '6');

	printf("%s\n", f1);
	printf("%s\n", f2);
}

void	ft_tolower_test()
{
	char	a1 = 'A';
	
	int b1 = ft_tolower(a1);
	int b2 = tolower(a1);

	printf("%c\n", (char)b1);
	printf("%c\n", (char)b2);
}

void	ft_toupper_test()
{
	char	a1 = 'a';
	
	int b1 = ft_toupper(a1);
	int b2 = toupper(a1);

	printf("%c\n", (char)b1);
	printf("%c\n", (char)b2);
}

void	ft_isalnum_test()
{
	char	a1 = 'l';
	
	int b1 = ft_isalnum(a1);
	int b2 = isalnum(a1);

	printf("%i\n", b1);
	printf("%i\n", b2);
}

void	ft_atoi_test()
{
	char	str[30] = {' ', '+' ,'+', '0', '1', '6', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	
	int a = atoi(str);
	int b = ft_atoi(str);

	printf("%i\n", a);
	printf("%i\n", b);
}

void	ft_strstr_test()
{
	char	str[30] = {' ', '1', '+' ,'+', '0', '0', '6', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	char	f_str[30] = {'+' ,'+', '\0'};
	
	char *astr;
	char *bstr;

	astr = strstr(str, f_str);
	bstr = ft_strstr(str, f_str);

	printf("%s\n", astr);
	printf("%s\n", bstr);
}

void	ft_strnstr_test()
{
	char	str[30] = {' ', '+' ,'+', '0', '0', '6', '3', '-', '5', '6', '7', '\0', '9', '0', '4', '0', '0', '\0'};
	char	f_str[30] = {'+' ,'+', '0', '\0'};
	size_t	l;
	
	char *astr;
	char *bstr;

	l = 7;
	// astr = strnstr(str, f_str, l);
	// bstr = ft_strnstr(str, f_str, l);

	printf("%s\n", astr);
	printf("%s\n", bstr);
}

char    *ft_strtrim1(char const *s)
{
    size_t        i;
    size_t        j;
    size_t        len;
    char        *res;
    i = 0;
    j = 0;

    if (s == NULL)
        return (NULL);
    
    while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
        i++;
    len = ft_strlen(s);
    
    while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
        len--;
    
    res = (char *)malloc(sizeof(char)* i == ft_strlen(s) ?
    
    1 : (len - i) + 1 + 1);
    if (!res)
        return (NULL);
    while (i < len)
        res[j++] = s[i++];
    res[j] = '\0';
    return (res);
}

void	ft_strttrim_test()
{
	char	str[30] = {' ', ' ', '\t', '1', '2', ' ', '\n','\0'};
	
	char	*a = ft_strtrim(str);
	char	*b = ft_strtrim1(str);

	printf("%s\n", str);
	printf("%s\n", a);
	printf("%s\n", b);
}

int		main()
{
	ft_strttrim_test();
	return (0);
}
