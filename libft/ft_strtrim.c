/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:54:48 by marvin            #+#    #+#             */
/*   Updated: 2022/10/20 12:54:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;
    char    *str;

    str = 0;
    if (s1 != 0 && set != 0)
    {
        i = 0;
        j = ft_strlen(s1);
        while (s1[i] && ft_strchr(set, s1[i]))
        {
            i++;
        }
        while (s1[j - 1] && ft_strchr(set, s1[j - i + 1]) && j > 1)
        {
            j--;
        }
        if (str)
        {
            ft_strlcpy(str, &s1[i], j - i + 1);
        }
    }
    return (str);
}