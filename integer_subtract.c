/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_subtract.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:46:46 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 11:51:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "integer.h"

void	integer_subtract(t_integer integer, t_integer another_integer)
{
	integer->value -= another_integer->value;
}
