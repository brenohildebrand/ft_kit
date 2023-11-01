/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:24:33 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/01 15:49:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/file.h"

void	init_file(t_file *f)
{
	(*f) = smalloc(sizeof(struct s_file));
	init_u8_vector(&(*f)->buffer);
	(*f)->path = (t_u8 *)"\0";
}
