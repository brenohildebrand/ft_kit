/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rmanager.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:59:09 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/25 16:16:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RMANAGER_H
# define RMANAGER_H

#include "basic.h"
#include "avltree.h"

/**
 * This is actually an AVL tree to manage memory allocations. If an error occur
 * while allocating, free the AVL tree and exit.
*/
typedef struct s_avltree			t_rmanager;
typedef struct s_avltreemetadata	t_rmanagermetadata;

#endif