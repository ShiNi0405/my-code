/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:56:53 by slai              #+#    #+#             */
/*   Updated: 2024/10/13 18:56:59 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dst_orig;
	unsigned int	i;

	dst_orig = dest;
	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (dst_orig);
}

/*int	main(void)
{
	char srcstring[] = "queen";
	char dststring[13];
	printf("%s", ft_strncpy(dststring, srcstring, 10));
}*/
