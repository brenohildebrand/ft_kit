/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgba.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 04:28:43 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:08:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RGBA_H
# define RGBA_H

# include "basic.h"

typedef struct s_rgba	*t_rgba;

struct s_rgba {
	t_u8	r;
	t_u8	g;
	t_u8	b;	
	t_u8	a;
};

#endif
