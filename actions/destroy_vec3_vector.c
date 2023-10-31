/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_vec3_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:43:00 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 18:43:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/vec3_vector.h"

void	destroy_vec3_vector(t_vec3_vector *v)
{
	sfree((void *)(*v)->data);
	sfree((void *)(*v));
	*v = 0;
}
