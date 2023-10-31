/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vec3_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:39:28 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 18:40:00 by bhildebr         ###   ########.fr       */
/*                                                        */
/* ************************************************************************** */

#include "actions.h"
#include "../types/vec3_vector.h"

void	init_vec3_vector(t_vec3_vector *v)
{
	(*v) = smalloc(sizeof(struct s_vec3_vector));
	(*v)->size = 0;
	(*v)->allocated_size = 16;
	(*v)->data = smalloc(16 * sizeof(struct s_vec3));
}
