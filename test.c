/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 00:44:03 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 00:44:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types/llist/llist.h"
#include "stdio.h"

int	main(void)
{
	t_status	status;
	t_llist		*mylist;

	status = llist_create(&mylist, 1);
	if (status == ko)
		return (ok);
	printf("Worked!\n");
	return (ok);
}