/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:43:20 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:43:22 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;
	int		i;

	i = 0;
	t = (char *)s;
	while (t[i])
	{
		if (t[i] == (char)c)
			return (&t[i]);
		i++;
	}
	if (t[i] == (char)c)
		return (&t[i]);
	return (NULL);
}
