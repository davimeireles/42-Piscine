/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 23:58:49 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/28 00:02:03 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_print(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		write(1, &s1[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;

	if (argc > 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(&argv[j][0], &argv[j + 1][0]) > 0 && argv[j
				+ 1][0] != '\0')
			{
				ft_swap(&argv[j], &argv[j + 1]);
				j = 0;
			}
			j++;
		}
	}
	j = 1;
	while (j < argc)
	{
		ft_print(&argv[j][0]);
		write(1, "\n", 1);
		j++;
	}
}
