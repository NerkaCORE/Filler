/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:44:14 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:44:16 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		count;
	char	*dup;
	char	*str2;

	i = 0;
	count = 0;
	str2 = (char *)str;
	while (str2[count])
		count++;
	dup = (char *)malloc(sizeof(*str2) * (count + 1));
	if (dup == NULL)
		return (0);
	while (str2[i])
	{
		dup[i] = str2[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
