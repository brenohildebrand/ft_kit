/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:02:29 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/17 18:02:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../modules/basic/basic.h"
#include "../modules/gc/gc.h"

int	main(void)
{
	/**
	 * F00
	 * Allocate multiple memory addresses in a sequence and then deallocate then.
	*/
	void	*addresses[100];

	for (int i = 0; i < 100; i++)
	{
		addresses[i] = gc_malloc(i);
		if (addresses[i] == NULL)
			break;
	}
	for (int i = 0; i < 100 && addresses != NULL; i++)
	{
		gc_free(addresses[i]);
	}

	/**
	 * F01
	 * Allocate multiple memory addressses in a sequence and then deallocate then
	 * all at once.
	*/
	for (int i = 0; i < 100; i++)
		if (gc_malloc(i) == NULL)
			break;
	gc_free_all();

	return (0);	
}