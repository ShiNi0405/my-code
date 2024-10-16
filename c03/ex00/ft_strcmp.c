/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:24:02 by slai              #+#    #+#             */
/*   Updated: 2024/10/16 20:24:07 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "abcwe";
	char	str2[] = "abcdddeee";
	char	str3[] = "ab";
	int		result;

	result = strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", result);

	result = strcmp(str1, str3);
	printf("strcmp(str1, str3) = %d\n", result);

	result = ft_strcmp(str1, str2);
	printf("ft_strcmp(str1, str2) = %d\n", result);

	result = ft_strcmp(str1, str3);
	printf("ft_strcmp(str1, str3) = %d\n", result);

	return (0);
}*/
