/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_run.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:19:20 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/17 23:25:40 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_run(t_test test)
{
	int			status;
	t_string	message;
	
	status = test->run(test);
	message = string_create();
	if (status == OK)
	{
		message_set_content(message, "OK");
		message_print(message);
	}
	else if (status == KO)
	{
		message_set_content(message, "KO");
		message_print(message);
	}
	message_destroy();
}