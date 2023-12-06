/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 04:07:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/28 04:07:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

int	main(void)
{
	t_string	message;

	message = string_create();
	string_set(message, "Welcome to the Kit.\n");
	string_print(message);
	string_destroy(message);
	return (0);
}
