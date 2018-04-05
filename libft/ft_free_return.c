/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_return.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:00:00 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:00:02 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_free_return(char **str)
{
	int len;

	len = 0;
	if (str == NULL)
		return (0);
	ft_putstr(*str);
	len = ft_strlen(*str);
	free(*str);
	*str = NULL;
	return (len);
}

int			ft_free_flags_return(char **str, t_flags b)
{
	int len;

	len = 0;
	if (str == NULL)
		return (0);
	*str = ft_check_if_flags_int(b, *str);
	ft_putstr(*str);
	len = ft_strlen(*str);
	free(*str);
	*str = NULL;
	return (len);
}
