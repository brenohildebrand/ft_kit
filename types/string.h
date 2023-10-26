/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:58:28 by brenohildeb       #+#    #+#             */
/*   Updated: 2023/10/25 14:31:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

#include "../types/basic.h"

typedef struct s_string	t_string;
typedef struct s_stringmetadata	t_stringmetadata;

struct s_string {
	t_u8				*data;
	t_stringmetadata	metadata;
};

struct s_stringmetadata {
	// void
};

#endif