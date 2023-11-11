/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rmanager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:24:37 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:12:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/usize_avltree.h"

t_usize_avltree	*get_rmanager(void)
{
	static t_usize_avltree	rmanager = AVL_EMPTY;

	return (&rmanager);
}
