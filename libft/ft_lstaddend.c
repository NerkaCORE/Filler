/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:05:15 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:05:22 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstaddend(t_list **alst, t_list *new)
{
	if ((*alst)->next != NULL)
		ft_lstaddend(&(*alst)->next, new);
	else
	{
		(*alst)->next = new;
	}
}
