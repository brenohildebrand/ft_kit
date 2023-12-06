/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_divide.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:40:26 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 11:50:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "integer.h"

void	integer_divide(t_integer integer, t_integer another_integer)
{
	integer->value /= another_integer->value;
}
