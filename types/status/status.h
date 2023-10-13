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

# include "../primitive/primitive.h"
# include "../cstring/cstring.h"

# include <stdlib.h>

/**
 * The status type.
*/
typedef struct s_status {
    t_u32		code;
    t_u32		action;
    t_cstring   *message;
}   t_status;

/**
 * List of status codes.
*/

# define STATUS_CODE_OK 0x00000000
# define STATUS_CODE_KO 0x000000FF

# define STATUS_CODE_MALLOC_ERROR 0x00000001
# define STATUS_CODE_ASSERT_ERROR 0x00000002

/**
 * List of status actions.
*/

# define STATUS_ACTION_NULL 0x00000000
# define STATUS_ACTION_EXIT 0x00000001
# define STATUS_ACTION_WARN 0x00000002

/**
 * The null message.
*/

# define STATUS_MESSAGE_NULL 0x00000000

/**
 * List of predefined status.
*/

# define STATUS_OK (t_status){\
			.code = STATUS_CODE_OK, \
			.action = STATUS_ACTION_NULL, \
			.message = STATUS_MESSAGE_NULL}

# define STATUS_KO (t_status){\
			.code = STATUS_CODE_KO, \
			.action = STATUS_ACTION_NULL, \
			.message = STATUS_MESSAGE_NULL}

#endif