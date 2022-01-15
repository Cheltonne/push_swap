/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <chajax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:28:26 by chajax            #+#    #+#             */
/*   Updated: 2022/01/13 16:34:28 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef	struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

typedef struct stack
{
	int				top;
	unsigned int	capacity;
	int				*array;
}	t_stack;

t_stack	*create_stack(unsigned int capacity);
