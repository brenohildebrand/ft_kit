/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:53:05 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 23:04:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTIONS_H
# define ACTIONS_H

# include "../types/basic.h"
# include "../types/usize_avltree.h"
# include "../types/u8_vector.h"

void			sexit(t_u32 status);
void			*smalloc(t_u32 nbytes);
void			sfree(void *pointer);

void			print(t_u8 *s);
t_usize_avltree	*get_rmanager(void);
t_i32			get_rmanager_height(const t_usize_avltree t);
t_i32			compute_rmanager_height(const t_usize_avltree t);
t_u32			get_rmanager_size(const t_usize_avltree t);
t_i32			compute_rmanager_size(const t_usize_avltree t);
void			update_rmanager_aggregate(t_usize_avltree t);
void			rotate_rmanager(t_usize_avltree *t, t_i32 direction);
void			rebalance_rmanager(t_usize_avltree *t);
void			destroy_rmanager(t_usize_avltree *t);
void			insert_rmanager(t_usize_avltree *t, t_usize data);
t_usize			delete_rmanager_min(t_usize_avltree *t);
void			delete_rmanager(t_usize_avltree *t, t_usize target);

void			init_u8_vector(t_u8_vector *v);
void			push_u8_vector(t_u8_vector v, t_usize data);
void			destroy_u8_vector(t_u8_vector *v);
void			realloc_u8_vector(t_u8_vector v);

#endif
