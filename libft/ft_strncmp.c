/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:47:49 by dfinn             #+#    #+#             */
/*   Updated: 2022/10/04 15:58:05 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
int	ft_strncmp(const char	*s1, const char	*s2, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	*str1;

	i = 0;
	str = unsigned char *s1;
	str1 = unsigned char *s2;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i > n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
}

int	main()
{
	char	tab[] = "hello";
	char	tab1[] = "hello";

	printf("%d", ft_strncmp(tab, tab2, 3));
	printf("%d", strncmp(tab, tab2, 3));

}
