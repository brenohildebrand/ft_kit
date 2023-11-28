/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 04:01:41 by marvin            #+#    #+#             */
/*   Updated: 2023/11/28 04:01:41 by marvin           ###   ########.fr       */
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