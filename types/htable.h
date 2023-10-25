/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htable.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:24:14 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/25 14:30:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HTABLE_H
# define HTABLE_H

typedef struct s_htable	t_htable;
typedef struct s_htablemetadata	t_htablemetadata;

struct s_htable {
	void				*data;
	t_htablemetadata	metadata;	
};

struct s_htablemetadata {
	t_string	key;
};

#endif