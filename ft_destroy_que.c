/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_que.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:04:41 by srakuma           #+#    #+#             */
/*   Updated: 2021/09/26 15:04:59 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

void	ft_destroy_que(t_queue *que)
{
	free(que->ptr);
	que->ptr = NULL;
	free(que);
	que = NULL;
}

