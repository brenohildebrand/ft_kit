/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:13:47 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:36:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "size.h"

void	size_destroy(t_size size)
{
	size_zeroify(size);
	memory_destroy(size);
}
