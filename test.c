/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 02:26:55 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/08 02:26:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/program_mode/program_mode.h"
#include "ft/program_resource_manager/program_resource_manager.h"
#include "ft/program_status/program_status.h"

// void	program_init(void)
// {
// 	program_status_create();
// 	program_rmanager_create();
// }

// void	program_loop(void)
// {
// 	while (1)
// 	{
// 		foo();
// 		bar();
// 		zee();
// 	}
// }

// int	main(void)
// {
// 	program_init();
// 	program_loop();
// 	return (0);
// }

int	main(void)
{
	t_task	*task;
	
	program_pqueue_create();
	program_pqueue_add_task(&main_task);
	while (/* pqueue is not empty */)
	{
		program_pqueue_pop(task);
		program_task_run(task);
	}
	program_pqueue_destroy();
	return (0);
}

void	init(void)
{
	print_mode();
	program_rmanager_create();
	program_status_create();
}

void	loop(void)
{
	
}

int	main(void)
{
	init();
	while (1)
		loop();
	return (0x00);
}