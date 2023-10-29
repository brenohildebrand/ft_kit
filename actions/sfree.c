/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfree.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:31:54 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 20:56:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	sfree(void *pointer)
{
	delete_rmanager(get_rmanager(), (t_usize)pointer);
}
