/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_divide.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 08:25:18 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 08:25:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.h"

void	number_divide(t_number number, t_number another_number)
{
	*((double *)(number)) /= \
		*((double *)(another_number));
}
