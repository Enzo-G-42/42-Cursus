/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:58:26 by engiacom          #+#    #+#             */
/*   Updated: 2024/11/06 15:14:17 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_cat_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	while(dst[j] && j < size)
		j++;
	if (j == size)
		return (ft_cat_strlen(src) + size);
	while (j + i < size - 1 && src[i])
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = 0;
	return (j + ft_cat_strlen(src));
}
