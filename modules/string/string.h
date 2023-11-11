/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:29:15 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 16:39:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include "../basic/basic.h"

typedef struct s_string	*t_string;

struct s_string
{
	t_u8	*data;
	t_u32	size;
};

void	string_print(t_string string);

#endif