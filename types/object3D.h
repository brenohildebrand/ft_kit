/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object3D.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:50:18 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/04 14:58:01 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT3D_H
# define OBJECT3D_H

#include "vec3_vector.h"

typedef struct s_object3D	*t_object3D;

struct s_object3D {
	t_vec3_vector	vertexes;
	
};

#endif
