/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:30:42 by slai              #+#    #+#             */
/*   Updated: 2024/10/16 20:30:49 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*original_dest;
	unsigned int	i;

	original_dest = dest;
	while (*dest != '\0')
		dest++;
	i = 0;
	while (*src != '\0' && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (original_dest);
}

/*int	main(void)
{
	char	str1[20];
	char	str2[20];

	strcpy(str1, "To be ");
	strcpy(str2, "123456");
	ft_strncat(str1, str2, 5);
	printf("%s\n", str1);
	return (0);
}*/
