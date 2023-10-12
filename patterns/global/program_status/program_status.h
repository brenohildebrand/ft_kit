/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_status.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:32:43 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/09 10:32:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGRAM_STATUS_H
# define PROGRAM_STATUS_H

# include "../../../types/primitive/primitive.h"
# include "../../../types/status/status.h"

/**
 * List of public functions.
*/

void    program_status_create();
void    program_status_destroy();

/**
 * List of private functions.
*/

void	program_status_act(t_u8 action);

#endif