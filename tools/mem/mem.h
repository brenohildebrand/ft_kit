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

t_status	mem_malloc(t_usize address, t_u32 size);
t_status	mem_zeroify(t_usize address, t_u32 size);

#endif