/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <evoisin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 19:41:01 by evoisin           #+#    #+#             */
/*   Updated: 2014/09/09 19:41:25 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char *str;

	i = 0;
	str = s;
	if (n < 1)
		return ;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
