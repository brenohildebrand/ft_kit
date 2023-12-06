/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:11:41 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/05 10:25:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_print(t_string string)
{
	write(1, string->address, string->length);
}
