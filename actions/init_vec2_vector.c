/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vec2_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:35:37 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:14:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/vec2_vector.h"

void	init_vec2_vector(t_vec2_vector *v)
{
	(*v) = smalloc(sizeof(struct s_vec2_vector));
	(*v)->size = 0;
	(*v)->allocated_size = 16;
	(*v)->data = smalloc(16 * sizeof(struct s_vec3));
}
