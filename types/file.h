/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:36:13 by brenohildeb       #+#    #+#             */
/*   Updated: 2023/10/28 22:31:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include "basic.h"
# include "u8_vector.h"

typedef struct s_file	*t_file;

struct s_file {
	t_u8		*path;
	t_u8_vector	buffer;
};

#endif
