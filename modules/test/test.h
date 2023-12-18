/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:05:34 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/17 23:22:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# define OK 1
# define KO 0

# include "memory.h"
# include "string.h"

typedef struct s_test	*t_test;

struct s_test {
	int	(*run)(t_test);
};

t_test	test_create(void);
void	test_destroy(t_test test);
void	test_run(t_test run);

#endif