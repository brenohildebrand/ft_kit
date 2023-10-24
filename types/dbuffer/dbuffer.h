/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbuffer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:46:17 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/07 22:46:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DBUFFER_H
# define DBUFFER_H

# include "../primitive/primitive.h"
# include "../status/status.h"

# define DBUFFER_INITIAL_TOTAL 1
# define DBUFFER_REALLOC_FACTOR 2

typedef struct s_dbuffer {
	t_u32	element_size;
	t_u32	number_of_elements;
    t_u32   max_number_of_elements;
}	t_dbuffer;

t_status	custom_dbuffer_create(t_custom_dbuffer **custom_dbuffer_address, t_custom_dbuffer_options options);
t_status	

t_status	u8_dbuffer_create(t_u8_dbuffer **dbuffer_address);
t_status	u8_dbuffer_append_character(t_u8_dbuffer *dbuffer);
t_status	u8_dbuffer_append_string(t_u8_dbuffer *dbuffer);
t_status	u8_dbuffer_destroy(t_u8_dbuffer **dbuffer_address);

t_status	u8_dbuffer_realloc(t_u8_dbuffer *dbuffer);

#endif