/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:30:20 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 12:47:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include "character.h"
# include "dmemory.h"
# include <unistd.h>

typedef struct s_string	*t_string;

struct s_string {
	char			*address;
	unsigned int	length;
	unsigned int	size;
};

t_string	string_copy(t_string string);
t_string	string_create(void);
void		string_destroy(t_string string);
void		string_realloc(t_string string, unsigned int new_size);
void		string_set(t_string string, t_character value);
void		string_append_character(t_string string, t_character character);
void		string_prepend_character(t_string string, t_character character);
void		string_append_string(t_string string, t_string another_string);
void		string_prepend_string(t_string string, t_string another_string);
void		string_print(t_string string);
void		string_insert(
				t_string string,
				unsigned int position,
				t_character character);
void		string_prepend_char(t_string string, t_character character);

#endif