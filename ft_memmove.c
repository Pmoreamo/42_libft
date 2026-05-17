/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:55:12 by pmorello          #+#    #+#             */
/*   Updated: 2026/05/17 03:53:26 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memmvove(void *dst, const void* src, size_t n)
{
	const unsigned char*	src_tmp;
	unsigned char*	dst_tmp;
	size_t i;
	
	src_tmp = (const unsigned char*)src;
	dst_tmp = (unsigned char*)dst;
	i = 0;
	if (dst_tmp > src_tmp)
	{
		while (n > 0)
		{
			n--;
			dst_tmp[n] = src_tmp[n];
		}
	}
	else
	{
		while (i < n)
		{
			dst_tmp[i] = src_tmp[i];
			i++;
		}
	}
	return (dst);
}