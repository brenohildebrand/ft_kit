/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:45:50 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 16:09:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/basic.h"
#include <stdlib.h>
#include <unistd.h>

void	*smalloc(t_u32 nbytes)
{
	void	*pointer;

 	pointer = malloc(nbytes);
 	if (pointer == NULL)
 	{
		destroy_rmanager(get_rmanager());
 		write(1, "An error ocurred while safe mallocing.\n", 39);		
 		exit(1);
 	}
	insert_rmanager(get_rmanager(), (t_usize)pointer);
 	return (pointer);
}
