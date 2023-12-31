/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:44:23 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:26:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	string_copy(t_string string)
{
	t_string		another_string;

	another_string = string_create();
	string_set(another_string, string->address);
	return (another_string);
}
