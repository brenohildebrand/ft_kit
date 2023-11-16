/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:49:27 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 18:04:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MMANAGER_H
# define MMANAGER_H

# include "../basic/basic.h"
# include "../avltree/avltree.h"
# include <stdlib.h>

int	*mmanager_malloc(size_t size);
// void	*mmanager_calloc();
// void	mmanager_free();
// void	mmanager_free_all();

t_i32		mmanager_avltree_compute_height(const t_avltree t);
t_i32		mmanager_avltree_compute_size(const t_avltree t);
void		mmanager_avltree_delete_min(t_avltree *t);
void		mmanager_avltree_delete(t_avltree *t, void *target);
void		mmanager_avltree_destroy(t_avltree *t);
t_i32		mmanager_avltree_get_height(const t_avltree t);
void		mmanager_avltree_insert(t_avltree *t, void *data);
void		mmanager_avltree_rebalance(t_avltree *t);
void		mmanager_avltree_rotate(t_avltree *t, t_i32 direction);
void		mmanager_avltree_update_aggregate(t_avltree t);

t_avltree	*mmanager_get_avltree(void);

#endif
