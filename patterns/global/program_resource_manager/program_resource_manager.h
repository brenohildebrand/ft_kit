/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 04:02:16 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/08 04:02:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGRAM_RESOURCE_MANAGER_H
# define PROGRAM_RESOURCE_MANAGER_H

# include "../../../types/primitive/primitive.h"
# include "../../../types/dbuffer/dbuffer.h"
# include "../../../types/rmanager/rmanager.h"

/**
 * List of public functions.
*/

void    program_rmanager_create();
void    program_rmanager_insert_address();
void    program_rmanager_free_address();
void    program_rmanager_free_all_addresses();
void    program_rmanager_destroy();

/**
 * List of private functions.
*/

void	_program_rmanager_act(t_u8 action);

#endif