/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:47:40 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:47:42 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char	*big1;
	char	*little1;

	i = 0;
	j = 0;
	little1 = (char *)little;
	big1 = (char *)big;
	if (little1[j] == '\0')
		return (big1);
	while (big1[i] != '\0')
	{
		j = 0;
		if (big1[i] == little1[j])
		{
			while (big1[i + j] == little1[j] && big1[i + j])
			{
				if (little1[++j] == '\0')
					return (&big1[i]);
			}
		}
		i++;
	}
	return (NULL);
}
