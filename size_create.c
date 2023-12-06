/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:52:39 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:36:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "size.h"

t_size	size_create(void)
{
	t_size	size;

	size = (t_size)memory_create(sizeof(struct s_size));
	size_zeroify(size);
	return (size);
}
