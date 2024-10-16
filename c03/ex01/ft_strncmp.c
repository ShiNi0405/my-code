/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:42:02 by slai              #+#    #+#             */
/*   Updated: 2024/10/16 20:42:11 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "abcdefg";
	char	str2[] = "abcdeZg"; // Different character at the end
	char	str3[] = "abcd";
	char	str4[] = "abcdefgh"; // Longer string
	char	str5[] = "abcde"; // Same beginning
	char	str6[] = "abc"; // Shorter string
	char	str7[] = ""; // Empty string

	// Test case 1: Identical strings
	printf("Test case 1 (Identical): %d (ft_strncmp) vs %d (strncmp)\n", 
		ft_strncmp(str1, str1, 10), strncmp(str1, str1, 10));

	// Test case 2: Different character
	printf("Test case 2 (Different character): %d (ft_strncmp) vs %d (strncmp)\n", 
		ft_strncmp(str1, str2, 10), strncmp(str1, str2, 10));

	// Test case 3: One string is a prefix of the other
	printf("Test case 3 (Prefix): %d (ft_strncmp) vs %d (strncmp)\n", 
		ft_strncmp(str3, str1, 10), strncmp(str3, str1, 10));

	// Test case 4: Different lengths, last character differs
	printf("Test case 4 (Different lengths): %d (ft_strncmp) vs %d (strncmp)\n", 
		ft_strncmp(str1, str4, 10), strncmp(str1, str4, 10));

	// Test case 5: Comparing with shorter string
	printf("Test case 5 (Shorter): %d (ft_strncmp) vs %d (strncmp)\n", 
		ft_strncmp(str1, str6, 10), strncmp(str1, str6, 10));

	// Test case 6: Comparing with empty string
	printf("Test case 6 (Empty): %d (ft_strncmp) vs %d (strncmp)\n", 
		ft_strncmp(str1, str7, 10), strncmp(str1, str7, 10));

	// Test case 7: Comparing equal length, all characters match
	printf("Test case 7 (All match): %d (ft_strncmp) vs %d (strncmp)\n", 
		ft_strncmp(str1, "abcdefg", 7), strncmp(str1, "abcdefg", 7));

	// Test case 8: Compare up to n characters
	printf("Test case 8 (N characters): %d (ft_strncmp) vs %d (strncmp)\n", 
		ft_strncmp(str1, str4, 5), strncmp(str1, str4, 5));

	return (0);
}*/
