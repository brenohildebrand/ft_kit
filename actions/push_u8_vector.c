/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_u8_vector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:46:13 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 20:05:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/u8_vector.h"

void	push_u8_vector(t_u8_vector v, t_usize data)
{
	if (v->allocated_size < v->size + 1)
		realloc_u8_vector(v);
	v->data[v->size + 1] = data;
	v->size += 1;	
}
