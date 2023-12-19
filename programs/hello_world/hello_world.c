/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:45:32 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/19 10:43:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../modules/string/string.h"

int	hello_world(void)
{
	t_string	message;

	message = string_create();
	string_set(message, "hello world\n");
	string_print(message);
	string_destroy(message);
	return (0);
}
