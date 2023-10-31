/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_vector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:04:11 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 23:08:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "../actions/actions.h"
#include "../types/vec3_vector.h"

int	main(void)
{
	t_vec3_vector v;

	print("[RUNNING VEC3_VECTOR TEST]");
	init_vec3_vector(&v);	
	assert(v->size == 0);
	assert(v->allocated_size == 16);
	print("[END]");
}
