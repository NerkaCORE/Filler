/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:06:10 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:06:12 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list2;

	if (f != NULL && lst != NULL)
	{
		list2 = f(lst);
		if (list2 != NULL && lst->next != NULL)
			list2->next = ft_lstmap(lst->next, f);
		return (list2);
	}
	return (NULL);
}
