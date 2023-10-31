/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:44:30 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/30 17:21:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef U8_VECTOR_H
# define U8_VECTOR_H

# include "basic.h"

typedef struct s_u8_vector	*t_u8_vector;

struct s_u8_vector {
	t_u8	*data;
	t_u32	allocated_size;
	t_u32	size;
};

#endif
