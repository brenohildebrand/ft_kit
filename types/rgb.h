/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:28:43 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:08:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RGB_H
# define RGB_H

# include "basic.h"

typedef struct s_rgb	*t_rgb;

struct s_rgb {
	t_u8	r;
	t_u8	g;
	t_u8	b;	
};

#endif
