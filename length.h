/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:18:17 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 11:20:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LENGTH_H
# define LENGTH_H

# include "memory.h"

typedef struct s_length	*t_length;

struct s_length {
	unsigned int	value;
};

t_length	length_create(void);
void		length_destroy(t_length length);
void		length_zeroify(t_length length);

#endif