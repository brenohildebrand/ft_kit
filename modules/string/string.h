/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:43:38 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/17 23:32:40 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include "memory.h"

typedef struct s_string	*t_string;

struct s_string {
	unsigned int	size;
	unsigned int	length;
	char			*content;
};

t_string	string_create(void);
void		string_destroy(t_string string);

void		string_set_size(t_string string, unsigned int size);
void		string_set_length(t_string string, unsigned int length);
void		string_set_content(t_string string, char *content);

void		string_get_size(t_string string);
void		string_get_length(t_string string);
void		string_get_content(t_string string);

t_string	string_realloc(t_string string);
void		string_append_char(t_string *string, char character);
void		string_print(t_string string);

#endif