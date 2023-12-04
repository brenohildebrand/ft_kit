/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_multiply.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 08:24:42 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 08:25:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "number.h"

void	number_multiply(t_number number, t_number another_number)
{
	*((double *)(number)) *= \
		*((double *)(another_number));
}
