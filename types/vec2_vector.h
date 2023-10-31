/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_vector.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:33:49 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/31 16:35:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_VECTOR_H
# define VEC2_VECTOR_H

# include "basic.h"
# include "../types/vec2.h"

typedef struct s_vec2_vector	*t_vec2_vector;

struct s_vec2_vector {
	t_vec2	data;
	t_u32	allocated_size;
	t_u32	size;
};

#endif