/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:08:57 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/25 14:30:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LLIST_H
# define LLIST_H

typedef	struct s_llist	t_llist;
typedef struct s_llistmetadata	t_llistmetadata;

struct s_llistmetadata {
	t_llist	*next;	
};

struct s_llist {
	void			*data;
	t_llistmetadata	metadata;
};

#endif