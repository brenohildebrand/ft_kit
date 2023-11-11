/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_vec2_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:41:06 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:10:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/vec2_vector.h"

void	destroy_vec2_vector(t_vec2_vector *v)
{
	sfree((void *)(*v)->data);
	sfree((void *)(*v));
	*v = 0;
}
