/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:46:18 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 14:46:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LLIST_H
# define LLIST_H

# include "../primitive/primitive.h"
# include "../status/status.h"

# include "../../tools/mem/mem.h"

typedef struct s_llist {
	t_usize			*content;
	struct s_llist	*next;
}	t_llist;

t_status	llist_create(t_usize address);

t_status	llist_malloc(
	t_llist	**llist_address, 
	t_u32	size_of_content
);
t_status	llist_init(
	t_llist	*llist,
);

#endif