/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:04:04 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 13:08:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSTRING_H
# define CSTRING_H

typedef struct s_cstring	*t_cstring;

struct s_cstring {
	char	*value;
};

t_cstring	cstring_create(void);
void		cstring_destroy(t_cstring cstring);

#endif