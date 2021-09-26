/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_que_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:02:56 by srakuma           #+#    #+#             */
/*   Updated: 2021/09/26 15:03:11 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

int	ft_is_que_empty(const t_queue *que)
{
	if (que->write == que->read)
		return (1);
	return (0);
}
