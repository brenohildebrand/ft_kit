/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:52:00 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 15:52:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.h"

void	number_add(t_number number, t_number another_number)
{
	*((double *)(number->data)) += \
		*(double *)(another_number->data);
}