/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 07:49:40 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/25 11:21:36 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
	{
		return (0);
	}
	while ((s1[i] || s2[i]) && i < n)
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

char	*ft_strstr(char *str, char *to_find)
{
	int		size;
	char	*pstr;

	pstr = str;
	size = ft_strlen(to_find);
	if (size <= 0)
	{
		return (str);
	}
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (ft_strncmp(str, to_find, size) == 0)
			return (str);
		str++;
	}
	if (ft_strncmp(str, to_find, size) != 0)
		return (0);
	return (pstr);
}
