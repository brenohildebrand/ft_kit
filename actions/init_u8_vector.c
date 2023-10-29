/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_u8_vector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:36:01 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 20:05:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/u8_vector.h"

void	init_u8_vector(t_u8_vector *v)
{
	(*v) = smalloc(sizeof(struct s_u8_vector));
	(*v)->size = 0;
	(*v)->allocated_size = 16;
	(*v)->data = smalloc((*v)->allocated_size * sizeof(t_u8));
}
