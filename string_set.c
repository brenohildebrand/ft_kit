/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:23:36 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 12:58:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_set(t_string string, t_character value)
{
	unsigned int	new_length;
	
	new_length = 0;
	while (value[new_length])
		new_length++;
	if (new_length + 1 > string->size)
}