/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avltree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:13:03 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/26 15:10:25 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVLTREE_H
# define AVLTREE_H

# include "basic.h"

# define AVL_EMPTY (0)
# define AVL_EMPTY_HEIGHT (-1)
# define LEFT (0)
# define RIGHT (1)
# define TREE_NUM_CHILDREN (2)

typedef struct s_usize_avlnode	*t_usize_avltree;

struct s_usize_avlnode {
	t_usize			data;
	t_usize_avltree	child[2];
	t_i32			height;
	t_u32			size;
};

#endif