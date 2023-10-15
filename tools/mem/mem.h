/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:08:46 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 19:08:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include "../../types/primitive/primitive.h"
# include "../../types/status/status.h"

# include <stdlib.h>

status_t	mem_malloc(t_generic **address, t_u32 size);
status_t	mem_calloc(t_generic **address, t_u32 nelements, t_u32 esize);
status_t	mem_set(t_generic *address, t_u32 size);

#endif