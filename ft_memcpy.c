/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:53:12 by pmorello          #+#    #+#             */
/*   Updated: 2026/05/17 01:50:06 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst || !src )
		return (NULL);
	size_t i;
	
	i = 0;
	while (i++ < n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
