/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:55:08 by srakuma           #+#    #+#             */
/*   Updated: 2021/09/26 15:06:17 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

int	ft_deque(t_queue *que, t_que_ele *ele)
{
	size_t	index;

	if (ft_is_que_empty(que))
		return (1);
	index = que->read % que->size;
	*ele = que->ptr[index];
	que->read++;
	return (0);
}
