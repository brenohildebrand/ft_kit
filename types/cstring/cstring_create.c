/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:13:38 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/07 18:13:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstring.h"

static void cstring_malloc(t_cstring **cstring_address)
{
	t_cstring	*cstring;

	cstring = (t_cstring *)malloc(sizeof(t_cstring));
	if (cstring == NULL)
		return (1);
	if (buffer_malloc(cstring->cstring) == 1)
	{
		free(cstring);
		return (1);
	}
	return (0);
}

static void cstring_init(t_cstring *cstring)
{
	if (buffer_append_character(cstring->cstring, '/0') == 1)
		return (1);
	return (0);
}

void cstring_create(t_cstring **cstring_address)
{
	cstring_malloc(cstring_address);
	cstring_init(*cstring_address);
	return (0);
}