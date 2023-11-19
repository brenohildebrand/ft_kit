/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_avl_malloc.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:29:04 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/17 15:29:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

void	*gc_avl_malloc(void)
{
	t_avl	t;

	t = malloc(sizeof(struct s_avl));
	if (t == NULL)
		return (NULL);
	return (t);
}