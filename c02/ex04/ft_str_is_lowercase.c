/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:00:00 by slai              #+#    #+#             */
/*   Updated: 2024/10/13 19:00:03 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!((*str >= 'a') && (*str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	string[] = "ac";
	int		result;

	result = ft_str_is_lowercase(string);
	printf("result = %d\n", result);
}*/
