/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <corozco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:18:51 by corozco           #+#    #+#             */
/*   Updated: 2019/10/23 03:03:49 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;
	size_t			i;

	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	i = 0;
	while (i < n && (dst != NULL || src != NULL))
	{
		*(tmp_dst + i) = *(tmp_src + i);
		i++;
	}
	return ((void *)tmp_dst);
}
