/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:55:49 by srakuma           #+#    #+#             */
/*   Updated: 2021/09/26 15:21:29 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
# define FT_QUEUE_H

# include <stdio.h>
# include <stdlib.h>

//typedef int t_que_ele; // t_que_ele を変えれば任意のサイズでできるはず
typedef struct s_que_ele
{
	int num;
	char *str;
	long key;
} t_que_ele; // t_que_ele を変えれば任意のサイズでできるはず

typedef struct s_queue
{
	t_que_ele	*ptr;
	size_t		size;
	int			write;
	int			read;
}			t_queue;

# ifndef LIBFT_H
void	*ft_calloc(size_t count, size_t size);
# endif

void	ft_destroy_que(t_queue *que);
int		ft_deque(t_queue *que, t_que_ele *ele);
int		ft_enque(t_queue *que, t_que_ele ele);
int		ft_is_que_full(const t_queue *que);
int		ft_is_que_empty(const t_queue *que);
size_t	ft_get_que_size(const t_queue *que);
t_queue	*ft_create_que(size_t cnt);

#endif