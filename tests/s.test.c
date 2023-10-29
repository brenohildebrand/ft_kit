/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:09:25 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 17:38:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../actions/actions.h"
#include <stdio.h>

int	main(void)
{
	t_u8	*string;

	string = smalloc(3 * sizeof(t_u8));
	string[0] = 'o';
	string[1] = 'k';
	string[2] = '\0';
	
	sexit(0);
}
