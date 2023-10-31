/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destoy_rgba_vector.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:58:14 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 18:58:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/rgba_vector.h"

void	destroy_rgba_vector(t_rgba_vector *v)
{
	sfree((void *)(*v)->data);
	sfree((void *)(*v));
	*v = 0;
}
