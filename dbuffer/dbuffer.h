/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbuffer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:46:17 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/07 22:46:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DBUFFER_H
# define DBUFFER_H

# include "../status/status.h"
# include "../types/types.h"

/**
 * This is the dynamic buffer.
*/
typedef struct s_dbuffer {
    t_u32   used;
    t_u32   total;
    t_usize address;
}   t_dbuffer;

/**
 * 
*/
t_status    dbuffer_create(t_dbuffer **dbuffer_address);

/**
 * 
*/
t_status    dbuffer_append_character(t_dbuffer *dbuffer);

/**
 * 
*/
t_status    dbuffer_append_string(t_dbuffer *dbuffer);

/**
 * 
*/
t_status    dbuffer_append_cstring(t_dbuffer *dbuffer, t_cstring *cstring);

/**
 * 
*/
t_status    dbuffer_destroy(t_dbuffer **dbuffer_address);

#endif