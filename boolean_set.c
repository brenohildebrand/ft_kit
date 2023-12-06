/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boolean_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:25:26 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:35:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"

void	boolean_set(t_boolean boolean, int value)
{
	if (value)
		boolean->value = TRUE;
	else
		boolean->value = FALSE;
}
