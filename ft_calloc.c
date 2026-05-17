/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:08:41 by pmorello          #+#    #+#             */
/*   Updated: 2026/05/17 01:51:40 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void*	ft_calloc(size_t nmemb, size_t size)
{
	void*	ptr;
	size_t	i;
	
	i = nmemb * size;
	ptr = (void*)malloc(i);
	if (!ptr)
		return (NULL);
	while (i-- > 0)
		ptr = '0';
	return (ptr);
	free(ptr);
}
