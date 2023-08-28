/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:09:08 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/25 11:17:01 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sizesrc;
	unsigned int	sizedest;
	unsigned int	i;
	unsigned int	j;

	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	j = 0;
	if (size <= 0)
	{
		return (sizesrc + size);
	}
	if (size > sizedest)
	{
		i = sizedest;
		while (src[j])
		{
			dest[i++] = src[j++];
		}
		dest[i] = '\0';
		return (sizedest + sizesrc);
	}
	return (size + sizedest);
}
