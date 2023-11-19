/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:33:28 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 15:35:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVL_H
# define AVL_H

# include "../basic/basic.h"
# include <stdlib.h>

# define AVL_EMPTY (0)
# define AVL_EMPTY_HEIGHT (-1)
# define AVL_EMPTY_SIZE (0)
# define LEFT (0)
# define RIGHT (1)
# define TREE_NUM_CHILDREN (2)

typedef struct s_avl	*t_avl;

struct s_avl {
	void	*data;
	t_avl	child[2];
	t_i32	height;
	t_u32	size;
};

# include "../gc/gc.h"

t_i32	avl_compute_height(const t_avl t);
t_i32	avl_compute_size(const t_avl t);
void	*avl_delete_min(t_avl *t);
void	avl_delete(t_avl *t, void *target);
void	avl_destroy(t_avl *t);
t_i32	avl_get_height(const t_avl t);
t_u32	avl_get_size(const t_avl t);
void	avl_init(t_avl t);
void	*avl_insert(t_avl *t, void *data);
void	*avl_malloc(void);
void	avl_rebalance(t_avl	*t);
void	avl_rotate(t_avl *t, t_i32 direction);
void	avl_update_aggregate(t_avl t);

#endif
