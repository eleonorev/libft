/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <evoisin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 18:39:14 by evoisin           #+#    #+#             */
/*   Updated: 2013/11/26 18:39:16 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t y;

	y = 0;
	i = ft_strlen(s1);
	while (y < n && s2[y] != '\0')
	{
		s1[i] = s2[y];
		i++;
		y++;
	}
	s1[i] = '\0';
	return (s1);
}
