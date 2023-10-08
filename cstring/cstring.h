/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:58:08 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/07 15:58:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSTRING_H
# define CSTRING_H

# include "../types/types.h"
# include "../buffer/buffer.h"

# include <stdlib.h>

/**
 * A cstring represents a string following the C convention. 
*/
typedef struct s_cstring {
    t_buffer cstring;
}   t_cstring;

/**
 * Creates a cstring.
*/
int cstring_create(t_cstring **cstring_address);

/**
 * Appends character to cstring. 
*/
int cstring_append_character(t_cstring *cstring);

/**
 * Insert character in cstring.
*/
int cstring_insert_character(t_cstring *cstring);

/**
 * 
*/
int cstring_clean(t_cstring *cstring);

/**
 * Destroys a cstring.
*/
int cstring_destroy(t_cstring **cstring_address);

#endif