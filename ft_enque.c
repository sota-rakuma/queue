/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enque.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:05:14 by srakuma           #+#    #+#             */
/*   Updated: 2021/09/26 15:05:31 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

int	ft_enque(t_queue *que, t_que_ele ele)
{
	size_t	index;

	if (ft_is_que_full(que))
		return (1);
	index = que->write % que->size;
	que->ptr[index] = ele;
	que->write++;
	return (0);
}
