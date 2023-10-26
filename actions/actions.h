/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:53:05 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/26 16:03:10 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTIONS_H
# define ACTIONS_H

# include "../types/basic.h"
# include "../types/avltree.h"

void	*smalloc(t_u32 nbytes);

t_i32	get_rmanager_tree(const t_usize_avltree t);
t_i32	compute_rmanager_height(const t_usize_avltree t);
t_u32	get_rmanager_size(const t_usize_avltree t);
t_i32	compute_rmanager_size(const t_usize_avltree t);
void	update_rmanager_aggregate(t_usize_avltree t);
void	rotate_rmanager(t_usize_avltree *t, t_i32 direction);
void	rebalance_rmanager(t_usize_avltree *t);
void	destroy_rmanager(t_usize_avltree *t);
void	insert_rmanager(t_usize_avltree *t, t_usize data);
t_usize	delete_rmanager_min(t_usize_avltree *t);

#endif