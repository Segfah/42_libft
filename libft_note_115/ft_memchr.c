/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <corozco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 02:22:19 by corozco           #+#    #+#             */
/*   Updated: 2019/10/23 03:09:33 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s;
	unsigned char	tmp_c;

	i = 0;
	tmp_s = (unsigned char *)s;
	tmp_c = (unsigned char)c;
	while (i < n)
	{
		if (tmp_s[i] == tmp_c)
			return ((void *)&tmp_s[i]);
		i++;
	}
	return (NULL);
}
