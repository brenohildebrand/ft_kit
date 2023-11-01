/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:57:50 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/01 15:50:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../types/basic.h"
// #include "../types/vec2_vector.h"

// static void	bresenham_for_slope_greater_than_1(
// 	t_vec2_vector v, 
// 	t_vec2 s, 
// 	t_vec2 e
// ){
// 	t_i32	x;
// 	t_i32	y;
// 	t_i32	dx;
// 	t_i32	dy;
// 	t_i32	p;
	
// 	x = s->x;
// 	y = s->y;
// 	dx = e->x - s->x;
// 	dy = e->y - s->y;
// 	p = 2 * dx - dy;
// 	while(x <= e->x)
// 	{
// 		if (p < 0)
// 		{
// 			p = p + 2 * dx;
// 		}
// 		else
// 		{
// 			p = p + 2 * dx - 2 * dy;
// 			y++;
// 		}
// 		x++;		
// 	}
// }

// static void	bresenham_for_slope_smaller_than_1(
// 	t_vec2_vector v,
// 	t_vec2 s,
// 	t_vec2 e
// )
// {
// 	t_i32	x;
// 	t_i32	y;
// 	t_i32	dx;
// 	t_i32	dy;
// 	t_i32	p;
	
// 	x = s->x;
// 	y = s->y;
// 	dx = e->x - s->x;
// 	dy = e->y - s->y;
// 	p = 2 * dy - dx;
// 	while(y <= e->y)
// 	{
// 		if (p < 0)
// 		{
// 			p = p + 2 * dy;
// 		}
// 		else
// 		{
// 			p = p + 2 * dy - 2 * dx;
// 			x++;
// 		}
// 		y++;		
// 	}
// }

// void	bresenham(t_vec2_vector v, t_vec2 s, t_vec2 e)
// {
// 	t_i32	dx;
// 	t_i32	dy;

// 	dx = e->x - s->x;
// 	dy = e->y - s->y;
// 	if (dy > dx)
// 		bresenham_for_slope_greater_than_1(v, s, e);
// 	else
// 		bresenham_for_slope_smaller_than_1(v, s, e);
// }