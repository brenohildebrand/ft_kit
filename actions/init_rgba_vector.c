/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_rgba_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:59:08 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 22:58:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/rgba_vector.h"

void	init_rgba_vector(t_rgba_vector *v)
{
	(*v) = smalloc(sizeof(struct s_rgba_vector));
	(*v)->size = 0;
	(*v)->allocated_size = 16;
	(*v)->data = smalloc((*v)->allocated_size * sizeof(struct s_rgba));
}
