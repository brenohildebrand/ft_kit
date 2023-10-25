/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:54:04 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/25 14:55:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/string.h"

void	smalloc_string(t_string **string)
{
	(*string) = smalloc(sizeof(t_string));
}