/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_calloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:31:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 19:31:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

status_t	mem_calloc(
	t_generic **address, 
	t_u32 nelements,
	t_u32 esize,
){
	(*address) = malloc(nelements * esize);
	if (address == NULL)
		return (ko);
	return (ok);
}