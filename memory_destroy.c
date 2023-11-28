/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:58:32 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 11:58:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

void	memory_destroy(t_memory memory)
{
	free(memory);
}
