/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:34:46 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 19:34:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

status_t	mem_malloc(
	t_generic **address, 
	t_u32 size
){
	(*address) = malloc(size);
	if (address == NULL)
		return (ko);
	return (ok);
}