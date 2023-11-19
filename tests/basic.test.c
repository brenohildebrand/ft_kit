/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:13:33 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 11:19:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../modules/basic/basic.h"
#include "../modules/string/string.h"
#include "../modules/assert/assert.h"

int	main(void)
{
	/**
	 * F00
	 * Test whether the types are guaranteed to be the predetermined size.
	*/
	struct s_string	message;

	message.data = (t_u8 *)"Oops! An error ocurred while asserting the t_i8 type.\n";
	message.size = 55;
	assert(sizeof(t_i8) == 1, message);
	message.data = (t_u8 *)"Oops! An error ocurred while asserting the t_u8 type.\n";
	message.size = 55;
	assert(sizeof(t_u8) == 1, message);
	message.data = (t_u8 *)"Oops! An error ocurred while asserting the t_i32 type.\n";
	message.size = 56;
	assert(sizeof(t_i32) == 4, message);
	message.data = (t_u8 *)"Oops! An error ocurred while asserting the t_u32 type.\n";
	message.size = 56;
	assert(sizeof(t_u32) == 4, message);
	message.data = (t_u8 *)"Oops! An error ocurred while asserting the t_i64 type.\n";
	message.size = 56;
	assert(sizeof(t_i64) == 8, message);
	message.data = (t_u8 *)"Oops! An error ocurred while asserting the t_u64 type.\n";
	message.size = 56;
	assert(sizeof(t_u64) == 8, message);
	message.data = (t_u8 *)"Oops! An error ocurred while asserting the t_f64 type.\n";
	message.size = 56;
	assert(sizeof(t_f64) == 8, message);

	return (0);
}
