/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:41:22 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/29 11:08:15 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*prange;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	prange = (int *)malloc(sizeof(int) * (max - min));
	if (!(prange))
		return (-1);
	while (min < max)
	{
		prange[i] = min;
		min++;
		i++;
	}
	*range = prange;
	return (i);
}
