/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist_malloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 00:22:28 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 00:22:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "llist.h"

// t_status	llist_malloc(
// 	t_llist	**llist_address, 
// 	t_u32	size_of_content
// ){
// 	t_status	status;
	
// 	status = mem_malloc(llist_address, sizeof(t_llist));
// 	if (status.code == e_status_code_ko)
// 		return (KO);
// 	status = mem_malloc((*llist_address)->content, 1 * size_of_content);
// 	if (status.code == e_status_code_ko)
// 	{
// 		free(*llist_address);
// 		return (KO);
// 	}
// 	return (OK);
// }

t_status	llist_malloc(
	t_llist **address, 
	t_u32	content_size
){
	t_status	status;

	status = mem_malloc((t_usize)address, sizeof(t_llist));
	if (status == ko)
		return (ko);
	status = mem_malloc((*address)->content, content_size);
	if (status == ko)
	{
		free(*address);
		return (ko);
	}
	return (ok);
}