/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 04:16:45 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/28 04:40:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

int	memory_test(void)
{
	t_memory		memory;
	unsigned int	i;

	i = 0;
	while (i < 100)
	{
		memory = memory_create(i);
		memory_destroy(memory);
		i++;
	}
	return (0);
}
