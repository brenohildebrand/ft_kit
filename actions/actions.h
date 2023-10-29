/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:53:05 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/29 00:35:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTIONS_H
# define ACTIONS_H

# include "../types/basic.h"
# include "../types/file.h"
# include "../types/u8_vector.h"
# include "../types/usize_avltree.h"

t_i32			compute_rmanager_height(const t_usize_avltree t);
t_i32			compute_rmanager_size(const t_usize_avltree t);
t_usize			delete_rmanager_min(t_usize_avltree *t);
void			delete_rmanager(t_usize_avltree *t, t_usize target);
void			destroy_rmanager(t_usize_avltree *t);
void			destroy_u8_vector(t_u8_vector *v);
t_i32			get_rmanager_height(const t_usize_avltree t);
t_u32			get_rmanager_size(const t_usize_avltree t);
t_usize_avltree	*get_rmanager(void);
void			init_u8_vector(t_u8_vector *v);
void			insert_rmanager(t_usize_avltree *t, t_usize data);
void			print(t_u8 *s);
void			push_u8_vector(t_u8_vector v, t_usize data);
void			read_file(t_file f, t_u8 *path);
void			realloc_u8_vector(t_u8_vector v);
void			rebalance_rmanager(t_usize_avltree *t);
void			rotate_rmanager(t_usize_avltree *t, t_i32 direction);
void			sexit(t_u32 status);
void			sfree(void *pointer);
void			*smalloc(t_u32 nbytes);
void			update_rmanager_aggregate(t_usize_avltree t);

#endif
