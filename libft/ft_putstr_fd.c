/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:42:48 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:42:50 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	int		i;
	char	*str2;

	i = 0;
	str2 = (char *)str;
	if (str2 == NULL)
		return ;
	while (str2[i])
	{
		ft_putchar_fd(str2[i], fd);
		i++;
	}
}
