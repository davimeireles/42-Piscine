/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:42:28 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/28 09:48:06 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*pointer;
	int		sizesrc;
	int		i;

	i = 0;
	sizesrc = ft_strlen(src);
	pointer = (char *)malloc(sizeof(char) * (sizesrc * 2));
	if (!(pointer))
		return (0);
	while (src[i])
	{
		pointer[i] = src[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}

/* int	main(void)
{
	char *test = "eu quero duplicar isso";
	char *dup;

	dup = ft_strdup(test);
	printf("%s\n", dup);
} */