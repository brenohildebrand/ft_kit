/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:49:27 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 18:04:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GC_H
# define GC_H

# include "../basic/basic.h"
# include "../avl/avl.h"
# include <stdlib.h>

void		*gc_malloc(size_t size);
void		gc_free(void *p);
void		gc_free_all(void);

t_i32		gc_avl_compute_height(const t_avl t);
t_i32		gc_avl_compute_size(const t_avl t);
void		*gc_avl_delete_min(t_avl *t);
void		gc_avl_delete(t_avl *t, void *target);
void		gc_avl_destroy(t_avl *t);
t_i32		gc_avl_get_height(const t_avl t);
t_u32		gc_avl_get_size(const t_avl t);
void		gc_avl_init(t_avl t);
void		*gc_avl_malloc(void);
void		*gc_avl_insert(t_avl *t, void *data);
void		gc_avl_rebalance(t_avl *t);
void		gc_avl_rotate(t_avl *t, t_i32 direction);
void		gc_avl_update_aggregate(t_avl t);

t_avl	*gc_get_avl(void);

#endif
