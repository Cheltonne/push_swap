/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:28:26 by chajax            #+#    #+#             */
/*   Updated: 2022/01/22 22:55:49 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "libft/libft.h"
# include <limits.h>

typedef struct s_data
{
	t_list	*a;
	t_list	*b;
	t_list	*a_cpy;
	int		size;
}				t_data;

typedef struct s_index
{
	int	i;
	int	j;
	int	o;
}				t_index;
typedef struct s_elem
{
	int		value;
	int		index;
}			t_elem;

void	sa(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rra(t_data *data);
int		parse_list(int size, char **av);
void	init(t_data *data, char **av);
void	del(void *content);
void	set_indexes(t_data *data, t_list *lst, t_list *lst_cpy);
void	init_sort_3(t_data *data, t_index *index, t_elem *elem, t_list *lst);
void	sort_3(t_data *data);
void	sort_5(t_data *data);
void	sort_big_stack(t_data *data);
void	sort_choice(t_data *data);
int		bubble_sort(t_data *data, t_list *lst);
int		is_sorted(t_data *data, t_list *lst);
void	fill_arr(t_data *data, t_elem **arr, int size, t_list *lst);
void	annihilate_linked_lists(t_data *data);
void	error_handling(t_data *data, int ac, char **av);
int		is_all_digits(int ac, char **av);

#endif
