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

# include "../types/types.h"
# include "../status/status.h"
# include "../mode/mode.h"

/**
 * The dynamic buffer type.
*/
typedef struct s_dbuffer {
    t_u32   used;
    t_u32   total;
    t_usize address;
}   t_dbuffer;

/**
 * Dbuffer settings.
*/

# define DBUFFER_INITIAL_SIZE 1
# define DBUFFER_REALLOC_FACTOR 2

/**
 * List of public functions.
*/

void    dbuffer_create(t_dbuffer **dbuffer_address);
void    dbuffer_append_character(t_dbuffer *dbuffer);
void    dbuffer_append_string(t_dbuffer *dbuffer);
void    dbuffer_append_cstring(t_dbuffer *dbuffer, t_cstring *cstring);
void    dbuffer_destroy(t_dbuffer **dbuffer_address);

/**
 * List of private functions.
*/

void    dbuffer_realloc(t_dbuffer *dbuffer);


#endif