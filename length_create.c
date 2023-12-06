/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:20:25 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:36:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "length.h"

t_length	length_create(void)
{
	t_length	length;

	length = memory_create(sizeof(struct s_length));
	length_zeroify(length);
	return (length);
}
