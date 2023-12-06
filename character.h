/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:01:52 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 18:01:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "memory.h"

typedef struct s_character	*t_character;

struct s_character {
	char	value;
};

t_character	character_create(void);
void		character_destroy(t_character character);
void		character_set(t_character character, char value);

#endif