/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:22:53 by cxu               #+#    #+#             */
/*   Updated: 2023/08/04 12:19:39 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"

typedef struct t_list
{
	int				value;
	int				index;
	struct t_list	*next;
}		t_list;

// fonction ft_list.c
t_list		*ft_lstnew(int value);
t_list		*ft_last(t_list *head);
void		ft_lstadd_back(t_list **stack, t_list *new);
int			ft_lstsize(t_list *head);

//fonction check_args.c
void		ft_check_args(char **argv);
void		ft_check_argv(char **argv);
int			ft_isdouble(int num, char **argv, int i);
int			ft_isnum(char *num);

//fonction utils.c
void		ft_error(char *msg);
int			is_sorted(t_list **stack);
int			get_distance(t_list **stack, int index);

// fonction actions 
int			push(t_list **stack_to, t_list **stack_from);
int			pa(t_list **stack_a, t_list **stack_b);
int			pb(t_list **stack_a, t_list **stack_b);
int			ra(t_list **stack);
int			rra(t_list **stack);
int			sa(t_list **stack);
void		sa_ra(t_list **stack_a);
void		sa_rra(t_list **stack_a);

//trie
void		radix_sort(t_list **stack_a, t_list **stack_b);
void		small_sort(t_list **stack_a, t_list **stack_b);
void		index_stack(t_list **stack);
void		sort_5(t_list **stack_a, t_list **stack_b);

//fonction free
void		free_one_stack(t_list **stack);
int			free_a_and_b(t_list **stack_a, t_list **stack_b);
void		ft_exit(t_list **stack_a, t_list **stack_b);
void		ft_free(char **str);
void		free_stack(t_list **stack);
void		free_split(char **args);

#endif