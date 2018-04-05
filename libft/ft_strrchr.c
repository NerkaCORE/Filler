/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:47:10 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:47:11 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;
	int		i;

	i = 0;
	t = (char *)s;
	while (t[i])
		i++;
	if (t[i] == (char)c)
		return (&t[i]);
	i--;
	while (t[i])
	{
		if (t[i] == (char)c)
			return (&t[i]);
		i--;
	}
	return (NULL);
}
