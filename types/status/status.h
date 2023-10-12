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
# include "../cstring/cstring.h"

# include <stdlib.h>

/**
 * The status type.
*/
typedef struct s_status {
    t_u8		code;
    t_u8		action;
    t_cstring   message;
}   t_status;

/**
 * List of status codes.
*/

# define STATUS_CODE_OK 0x00
# define STATUS_CODE_KO 0xFF

# define STATUS_CODE_MALLOC_ERROR 0x01
# define STATUS_CODE_ASSERT_ERROR 0x02

/**
 * List of status actions.
*/

# define STATUS_ACTION_NULL 0x00
# define STATUS_ACTION_EXIT 0x01
# define STATUS_ACTION_WARN 0x02

/**
 * The null message.
*/

# define STATUS_MESSAGE_NULL 0

/**
 * List of public functions.
*/

void    status_act(t_status status);
void    status_set(t_status status);

/**
 * List of private functions.
*/

/**
 * List of predefined status.
*/

# define STATUS_PREDEFINED_EXIT (t_status){\
			.code = STATUS_CODE_KO, \
			.action = STATUS_ACTION_EXIT, \
			.message = STATUS_MESSAGE_NULL}

# define STATUS_PREDEFINED_OK (t_status){\
			.code = STATUS_CODE_OK, \
			.action = STATUS_ACTION_NULL, \
			.message = STATUS_MESSAGE_NULL}

#endif