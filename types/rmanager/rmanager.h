/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rmanager.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:29:17 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/09 17:29:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RMANAGER_H
# define RMANAGER_H

typedef struct s_resource_manager {
    t_dbuffer list_of_addresses;
}   t_resource_manager;

#endif