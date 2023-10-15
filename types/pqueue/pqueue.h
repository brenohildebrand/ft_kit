/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pqueue.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:11:22 by marvin            #+#    #+#             */
/*   Updated: 2023/10/13 22:11:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PQUEUE_H
# define PQUEUE_H

# include "../primitive/primitive.h"

typedef struct s_pqueue {
	t_dbuffer	*content;
	t_llist		*content;
}	t_pqueue;

#endif