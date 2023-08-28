/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:44:58 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/24 09:44:58 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = ft_strlength(src);
	if (n > length)
		return (src);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
	{
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
