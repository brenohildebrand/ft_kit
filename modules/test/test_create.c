/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:16:16 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/17 23:17:56 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_test	test_create(void)
{
	t_test	test;

	test = memory_create(sizeof(struct s_test));
	test->run = 0;
	return (test);
}