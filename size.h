/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:39:16 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 11:15:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIZE_H
# define SIZE_H

# include "memory.h"

typedef struct s_size	*t_size;

struct s_size {
	unsigned int	value;
};

t_size	size_create(void);
void	size_destroy(t_size size);
void	size_zeroify(t_size size);

#endif