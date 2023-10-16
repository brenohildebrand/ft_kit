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

# include <stdlib.h>

/**
 * The status type.
*/
typedef	int t_status;

/**
 * A list of status.
*/
enum e_status {
	ok = 0x00000000,
	ko = 0xFFFFFFFF,
};

#endif