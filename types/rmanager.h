/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rmanager.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:59:09 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:08:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RMANAGER_H
# define RMANAGER_H

# include "usize_avltree.h"

/**
 * This is actually an AVL tree to manage memory allocations. If an error occur
 * while allocating, free the AVL tree and exit.
*/
typedef struct s_usize_avltree	t_rmanager;

#endif
