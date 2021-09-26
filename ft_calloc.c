/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:56:45 by srakuma           #+#    #+#             */
/*   Updated: 2021/09/26 15:01:32 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

#ifndef LIBFT_H

static void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	unsigned char	*str;
	size_t			i; 

	ch = (unsigned char)c;
	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0)
		count = 1;
	if (size == 0)
		size = 1;
	ptr = malloc(size * count);
	if (ptr == 0)
		return (0);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}

#endif
