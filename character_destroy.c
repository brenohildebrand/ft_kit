/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:12:07 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 18:12:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.h"

void	character_destroy(t_character character)
{
	*(char *)(character) = '\0';
	memory_destroy(character);
}
