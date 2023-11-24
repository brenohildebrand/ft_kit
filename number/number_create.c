/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:56:39 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 15:56:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.h"

t_number	number_create(void)
{
	t_number	number;

	number = (t_number)memory_create(sizeof(struct s_number));
	number->data = memory_create(sizeof(double));
	*((double *)(number->data)) = 0.0;
	return (number);
}