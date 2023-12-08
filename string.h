/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:43:38 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/08 12:20:16 by bhildebr         ###   ########.fr       */
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
t_string	string_realloc(t_string string);
void		string_append_char(t_string *string, char character);

#endif