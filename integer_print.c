/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:44:52 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:37:01 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "integer.h"

void	integer_print(t_integer integer)
{
	t_string			string;

	string = integer_to_string(integer);
	string_print(string);
	string_destroy(string);
}
