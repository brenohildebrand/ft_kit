/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:57:49 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 15:57:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.h"

void	number_destroy(t_number number)
{
	*((double *)number) = 0.0;
	memory_destroy(number);
}
