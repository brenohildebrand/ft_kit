/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:23:36 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:25:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_set(t_string string, t_character value)
{
	unsigned int	new_length;

	new_length = 0;
	while (value[new_length])
		new_length++;
	string_realloc(string, new_length);
	string->address[new_length] = 0;
	while (new_length--)
		string->address[new_length] = value[new_length];
}
