/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:21:31 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:36:36 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "length.h"

void	length_destroy(t_length length)
{
	length_zeroify(length);
	memory_destroy(length);
}
