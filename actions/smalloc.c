/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:45:50 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/25 13:52:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/basic.h"
#include <stdlib.h>
#include <unistd.h>

void	*smalloc(t_u32 nbytes)
{
	void	*pointer;
	
	pointer = malloc(nbytes);
	if (pointer == NULL)
	{
		sfree_everything();
		write(1, "An error ocurred while safe mallocing.\n", 39);		
		exit(1);
	}
	register_malloc();
	return (pointer);
}