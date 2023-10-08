/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 01:49:07 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/08 01:49:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATUS_H
# define STATUS_H

# include "../types/types.h"
# include "../mode/mode.h"
// # include "../cstring/cstring.h"

# include <stdlib.h>

/**
 * The status type.
*/
typedef struct s_status {
    t_u16       code;
    t_u16       action;
    t_cstring   message;
}   t_status;

/**
 * List of status codes.
*/

# define STATUS_CODE_OK 0x0000
# define STATUS_CODE_KO 0xFFFF

# define STATUS_CODE_MALLOC_ERROR 0x0001
# define STATUS_CODE_ASSERT_ERROR 0x0002

/**
 * List of status actions.
*/

# define STATUS_ACTION_EXIT 0x0000
# define STATUS_ACTION_WARN 0x0001

/**
 * List of public functions.
*/

void    status_set(t_status status);

/**
 * List of private functions.
*/

#endif