/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:29:56 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/23 13:29:56 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = size - 1;
	j = 0;
	while (i >= size / 2)
	{
		aux = tab[j];
		tab[j] = tab[i];
		tab[i] = aux;
		i--;
		j++;
	}
}
