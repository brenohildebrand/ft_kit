/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avltree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:13:03 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/25 16:58:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVLTREE_H
# define AVLTREE_H

# include "basic.h"

# define AVL_EMPTY (0)

typedef struct s_usize_avlnode	*t_usize_avltree;

struct s_usize_avlnode {
	t_usize			*data;
	t_usize_avltree	*left;
	t_usize_avltree	*right;	
	t_u32			height;
};

#endif