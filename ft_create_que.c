/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_que.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:03:56 by srakuma           #+#    #+#             */
/*   Updated: 2021/09/26 15:04:22 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

t_queue	*ft_create_que(size_t cnt)
{
	t_queue	*que;

	if (cnt == 0)
		return (NULL);
	que = (t_queue *)ft_calloc(1, sizeof(t_queue));
	if (que == NULL)
		return (NULL);
	que->ptr = ft_calloc(cnt, sizeof(t_que_ele));
	if (que->ptr == NULL)
	{
		free(que);
		return (NULL);
	}
	que->size = cnt;
	que->write = 0;
	que->read = 0;
	return (que);
}
