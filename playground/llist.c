/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:26:46 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 12:26:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/llist/llist.h"

t_status	main(void)
{
	t_status	status;
	t_llist		*llist;

	status = llist_create(&llist, 1);
	if (status == ko)
		return (ko);
	return (ok);
}