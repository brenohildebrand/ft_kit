/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgba_vector.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:46:47 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 18:48:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RGBA_VECTOR_H
# define RGBA_VECTOR_H

# include "basic.h"
# include "rgba.h"

typedef struct s_rgba_vector	*t_rgba_vector;

struct s_rgba_vector {
	t_rgba	data;
	t_u32	allocated_size;
	t_u32	size;
};

#endif
