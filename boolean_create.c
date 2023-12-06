/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boolean_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:16:59 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:35:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"

t_boolean	boolean_create(void)
{
	t_boolean	boolean;

	boolean = memory_create(sizeof(struct s_boolean));
	boolean->value = FALSE;
	return (boolean);
}
