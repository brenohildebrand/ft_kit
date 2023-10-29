/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_u8_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:53:28 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 20:58:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/u8_vector.h"

void	destroy_u8_vector(t_u8_vector *v)
{
	sfree((void *)((*v)->data));
	sfree((void *)(*v));
	*v = 0;
}
