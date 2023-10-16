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

t_status	mem_malloc(
	t_usize address,
	t_u32 size
){
	address = (t_usize)malloc(size);
	if (address == 0x0)
		return (ko);
	return (ok);
}