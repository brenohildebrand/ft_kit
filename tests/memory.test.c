/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:14:35 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 16:14:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

int	main(void)
{
	t_memory	memory;

	memory = memory_create(sizeof(int));
	memory_destroy(memory);
	
	return (0);
}