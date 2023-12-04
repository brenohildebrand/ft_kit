/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:21:44 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 13:02:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	string_create(unsigned int length)
{
	t_string	string;

	string = (t_string)memory_create(sizeof(struct s_string));
	string->size = 1;
	string->address = (t_memory)memory_create(string->size);
	*(string->address) = '\0';
	return (string);
}