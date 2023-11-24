/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:08:30 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 18:08:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.h"

t_character	character_create(void)
{
	t_character character;

	character = (t_character)memory_create(sizeof(char));
	*((char *)(character)) = '\0';
	return (character);
}