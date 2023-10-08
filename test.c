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

void	status_set()
{
	static int status = 0;

	status_ask(GET);

	status = 42;
}

void	status_store()
{
	static int status = 0;
	
}

void	foo()
{
	// do whatever
	// set status before returning
	status_set(42);
}

int	main(void)
{
	foo();
}