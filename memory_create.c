/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:13:43 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 13:18:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

t_memory	memory_create(unsigned int size)
{
	t_memory	memory;

	memory = malloc(size);
	if (memory == (void *)0)
	{
		write(1, "Oops! An error ocurred.\n", 25);
		exit(255);
	}
	return (memory);
}