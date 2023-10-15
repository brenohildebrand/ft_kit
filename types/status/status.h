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

enum e_status_code {
	e_status_code_ok = 0x00000000,
	e_status_code_ko = 0x000000FF,
};

/**
 * List of status actions.
*/

enum e_status_action {
	e_status_action_null = 0x00000000,
	e_status_action_exit = 0x00000001,
	e_status_action_warn = 0x00000002
};

/**
 * The null message.
*/

enum e_status_message {
	e_status_message_null = 0x00000000
};

/**
 * List of predefined status.
*/

# define STATUS_OK (t_status){\
			.code = ok, \
			.action = null, \
			.message = null}

# define STATUS_KO (t_status){\
			.code = ko, \
			.action = null, \
			.message = null}

/**
 * Syntatic sugar for the predefined status.
*/

# ifndef DO_NOT_USE_STATUS_SYNTATIC_SUGAR
#  define USE_SYNTATIC_SUGAR
# endif

# ifdef USE_STATUS_SYNTATIC_SUGAR
#  define OK STATUS_OK
#  define KO STATUS_KO
# endif

#endif