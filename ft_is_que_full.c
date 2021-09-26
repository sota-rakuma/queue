/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_que_full.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:50:04 by srakuma           #+#    #+#             */
/*   Updated: 2021/09/26 15:03:31 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

int	ft_is_que_full(const t_queue *que)
{
	int	diff;

	diff = (int)(que->write - que->read);
	if (diff == que->size)
		return (1);
	return (0);
}