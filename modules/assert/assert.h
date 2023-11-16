/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:23:37 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 10:59:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSERT_H
# define ASSERT_H

# include "../basic/basic.h"
# include "../string/string.h"
# include <stdlib.h>

void	assert(t_i32 condition, struct s_string message);

#endif
