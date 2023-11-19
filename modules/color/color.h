/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:23:24 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/17 18:23:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

typedef struct s_rgba	*t_rgba;
typedef struct s_rgb	*t_rgb;

struct s_rgba {
	t_u8	r;
	t_u8	g;
	t_u8	b;
	t_u8	a;
};

struct s_rgb {
	t_u8	r;
	t_u8	g;
	t_u8	b;
};

enum color {
	red = (struct s_rgba){
		.r = 0xFF,
		.g = 0x00,
		.b = 0x00,
		.a = 0xFF
	},
	green = (struct s_rgba){
		.r = 0x00,
		.g = 0xFF,
		.b = 0x00,
		.a = 0xFF 
	}
}

#endif