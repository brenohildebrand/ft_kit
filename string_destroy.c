/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:35:55 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:26:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_destroy(t_string string)
{
	unsigned int	i;

	i = string->length;
	while (i--)
		string->address[i] = 0;
	memory_destroy(string->address);
	string->length = 0;
	string->size = 0;
}
