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

# include "../primitive/primitive.h"
# include "../dbuffer/dbuffer.h"

# include <stdlib.h>

/**
 * A cstring represents a string following the C convention. 
*/
typedef struct s_cstring {
    t_dbuffer   cstring;
}   t_cstring;

/**
 * List of public functions.
*/
void cstring_create(t_cstring **cstring_address);
void cstring_push_character(t_cstring *cstring);
void cstring_shift_character(t_cstring *cstring);
void cstring_clean(t_cstring *cstring);
void cstring_destroy(t_cstring **cstring_address);

/**
 * List of private functions.
*/

#endif