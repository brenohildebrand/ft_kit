/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_vector.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:20:44 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 17:23:56 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_VECTOR_H
# define VEC3_VECTOR_H

# include "basic.h"
# include "../types/vec3.h"

typedef struct s_vec3_vector	*t_vec3_vector;

struct s_vec3_vector {
	t_vec3	data;
	t_u32	allocated_size;	
	t_u32	size;
};

#endif
