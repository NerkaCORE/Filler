/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:43:11 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:43:13 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchar(char c, size_t size)
{
	char		*str;

	str = (char*)malloc(size + 1);
	ft_memset(str, c, size);
	str[size] = '\0';
	return (str);
}
