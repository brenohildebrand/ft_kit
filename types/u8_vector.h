/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:44:30 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 19:53:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DBUFFER_H
# define DBUFFER_H

# include "basic.h"

typedef struct s_u8_vector	*t_u8_vector;

struct s_u8_vector {
	t_u8	*data;
	t_u32	allocated_size;
	t_u32	size;
};

#endif
