/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 04:07:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/28 04:07:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

int	main(void)
{
	t_integer	pid;

	pid = integer_create();
	integer_set(pid, getpid());
	integer_print(pid);
	return (0);
}
