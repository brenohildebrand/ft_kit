/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:35:55 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 10:37:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_destroy(t_string string)
{
	string_set(string, "");
	string->size = 0;
	memory_destroy(string->address);
	memory_destroy(string);
}