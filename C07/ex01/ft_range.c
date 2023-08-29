/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:35:02 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/28 19:43:53 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long int	i;
	int			*pmalloc;

	if (min >= max)
		return (NULL);
	i = 0;
	pmalloc = (int *)malloc(sizeof(int) * (max - min));
	if (!(pmalloc))
		return (NULL);
	while (min < max)
	{
		pmalloc[i] = min;
		min++;
		i++;
	}
	return (pmalloc);
}
