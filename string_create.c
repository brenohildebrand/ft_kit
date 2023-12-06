/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:21:44 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:26:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	string_create(void)
{
	t_string	string;

	string = memory_create(sizeof(struct s_string));
	string->size = 1;
	string->length = 0;
	string->address = memory_create(string->size);
	*(string->address) = '\0';
	return (string);
}
