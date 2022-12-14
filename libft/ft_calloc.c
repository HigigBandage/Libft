/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:57:56 by marvin            #+#    #+#             */
/*   Updated: 2022/10/18 17:57:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *result;
    size_t  i;

    result = (void *)malloc(size * count * sizeof(void));
    if (!result)
    {
        return (NULL);
    }
    if (size == 0)
    {
        size = -1;
    }
    i = count * size;
    if (i / size != count)
    {
        return (NULL);
    }
    ft_bzero(result, count * size);
    return (result);
}
