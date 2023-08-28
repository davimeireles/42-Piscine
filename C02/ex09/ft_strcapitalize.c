/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:36:45 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/24 09:36:47 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	specialcharacter(char c)
{
	if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
		return (1);
	return (0);
}

int	isletter(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (isletter(str[i]))
		str[i] = str[i] - 32;
	while (str[i])
	{
		if (specialcharacter(str[i]) && isletter(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
