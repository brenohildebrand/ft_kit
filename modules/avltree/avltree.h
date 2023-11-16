/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avltree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:33:28 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 15:35:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVLTREE_H
# define AVLTREE_H

# include "../basic/basic.h"

# define AVL_EMPTY (0)
# define AVL_EMPTY_HEIGHT (-1)
# define LEFT (0)
# define RIGHT (1)
# define TREE_NUM_CHILDREN (2)

typedef struct s_avltree	*t_avltree;

struct s_avltree {
	void		*data;
	t_avltree	child[2];
	t_i32		height;
	t_u32		size;
};

#endif
