/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_subtract.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 08:23:48 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 08:31:25 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.h"

void	number_subtract(t_number number, t_number another_number)
{
	*((double *)(number)) -= \
		*((double *)(another_number));
}
