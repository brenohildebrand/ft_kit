/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mode.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:50:20 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/07 22:50:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODE_H
# define MODE_H

# include "../types/types.h"

# define DEBUG_MODE 0x00
# define RELEASE_MODE 0x01

# ifndef MODE
#  define MODE DEBUG_MODE
# endif

#endif