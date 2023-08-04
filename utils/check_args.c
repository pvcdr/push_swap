/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:40:28 by cxu               #+#    #+#             */
/*   Updated: 2023/08/04 12:33:11 by cxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_double(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
	{
		if (num[1] == '\0')
			return (0);
		i++;
	}
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	free_error(char **str)
{
	ft_free(str);
	ft_error("Error");
}

void	ft_check_args(char **argv)
{
	int		i;
	long	tmp;
	char	**args;	

	i = 0;
	args = ft_split(argv[1], ' ');
	if (args == NULL)
	{
		ft_free(args);
		exit(0);
	}
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!ft_isnum(args[i]))
			free_error(args);
		if (ft_double(tmp, args, i))
			free_error(args);
		if (tmp < -2147483648 || tmp > 2147483647)
			free_error(args);
		i++;
	}
	ft_free(args);
}

void	ft_check_argv(char **argv)
{
	int		i;
	long	tmp;

	i = 1;
	while (argv[i])
	{
		tmp = ft_atoi(argv[i]);
		if (!ft_isnum(argv[i]))
			ft_error("Error");
		if (ft_double(tmp, argv, i))
			ft_error("Error");
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error("Error");
		i++;
	}
}
