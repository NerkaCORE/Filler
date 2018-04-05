/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:45:15 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:45:16 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	k = 0;
	if (size == 0)
		return (j);
	while (src[k] != '\0' && i + k < size - 1)
	{
		dst[k + i] = src[k];
		k++;
	}
	dst[k + i] = '\0';
	if (i < size)
		return (j + i);
	else
		return (j + size);
}
