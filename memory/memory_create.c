/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:17:01 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 16:17:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

t_memory	memory_create(unsigned int size)
{
	t_memory	memory;

	memory = malloc(sizeof(struct s_memory));
	if (memory == (void *)0)
	{
		write(1, "Whew. An error ocurred while trying to create memory.\n", 55);
		exit(255);
	}
	return (memory);
}