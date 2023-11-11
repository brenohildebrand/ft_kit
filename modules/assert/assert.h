/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:23:37 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 16:50:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSERT_H
# define ASSERT_H

# include "../basic/basic.h"
# include "../string/string.h"
# include <stdlib.h>

void	assert(t_i32 condition, struct s_string message)
{
	if (condition == 1)
	{
		return ;
	}
	else
	{
		string_print(&message);
		exit(1);
	}
}

#endif