/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:46:18 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 18:00:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LLIST_H
# define LLIST_H

# include "../primitive/primitive.h"
# include "../status/status.h"

# include "../../tools/mem/mem.h"

typedef struct s_llist {
	t_usize			content;
	t_u32			content_size;
	struct s_llist	*next;
}	t_llist;

t_status	llist_create(t_llist **address, t_u32 content_size);

t_status	llist_malloc(t_llist **address, t_u32 content_size);
t_status	llist_init(t_llist *llist, t_u32 content_size);

#endif