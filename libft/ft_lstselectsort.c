/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstselectsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:06:33 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/03/16 18:06:35 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstselectsort(t_list *lst, int (*cmp)(void*, void*))
{
	t_list		*cur1;
	t_list		*cur2;
	t_list		tmp;

	cur1 = lst;
	while (cur1)
	{
		cur2 = cur1->next;
		while (cur2)
		{
			if (cmp(cur1->content, cur2->content) == 0)
			{
				tmp.content = cur2->content;
				cur2->content = cur1->content;
				cur1->content = tmp.content;
			}
			cur2 = cur2->next;
		}
		cur1 = cur1->next;
	}
	return (lst);
}
