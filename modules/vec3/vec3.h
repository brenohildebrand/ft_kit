/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:47:42 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/17 19:47:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_H
# define VEC3_H

# include "../basic/basic.h"

typedef struct s_vec3	*t_vec3;

struct s_vec3 {
	t_f64	x;
	t_f64	y;
	t_f64	z;
};

#endif