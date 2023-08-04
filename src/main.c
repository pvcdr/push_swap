/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:25:44 by cxu               #+#    #+#             */
/*   Updated: 2023/08/04 12:45:10 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_args(t_list **stack_a, t_list **stack_b, char **argv)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	args = ft_split(argv[1], ' ');
	if (args == NULL)
	{
		ft_free(args);
		exit (-1);
	}
	while (args[i])
	{		
		new = ft_lstnew(ft_atoi(args[i]));
		if (new == NULL)
		{
			ft_free (args);
			ft_exit(stack_a, stack_b);
		}
		ft_lstadd_back(stack_a, new);
		i++;
	}
	index_stack(stack_a);
	ft_free(args);
}

static void	init_argv(t_list **stack_a, t_list **stack_b, char **argv)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 1;
	args = argv;
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		if (new == NULL)
			ft_exit (stack_a, stack_b);
		ft_lstadd_back(stack_a, new);
		i++;
	}
	index_stack(stack_a);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		small_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
	free_a_and_b(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (-1);
	if (argc == 2)
		ft_check_args(argv);
	else
		ft_check_argv(argv);
	stack_a = (t_list **)malloc(sizeof(t_list *));
	if (stack_a == NULL)
		free_one_stack(stack_a);
	stack_b = (t_list **)malloc(sizeof(t_list *));
	if (stack_b == NULL)
		free_one_stack(stack_b);
	*stack_a = NULL;
	*stack_b = NULL;
	if (argc == 2)
		init_args (stack_a, stack_b, argv);
	else
		init_argv (stack_a, stack_b, argv);
	if (is_sorted(stack_a))
		ft_exit (stack_a, stack_b);
	sort_stack(stack_a, stack_b);
	return (0);
}
