/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:30:20 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/04 12:59:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include "character.h"

typedef struct s_string	*t_string;

struct s_string {
	unsigned int	size;
	t_character		address;
};

t_string	string_copy(t_string string);
t_string	string_create(unsigned int size);
void		string_destroy(t_string string);
void		string_realloc(t_string string, unsigned int new_size);
void		string_set(t_string string, t_character value);

#endif