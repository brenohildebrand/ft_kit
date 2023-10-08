/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:23:18 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/07 22:23:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	t_cstring	*my_string;

	cstring_create(&my_string);
	cstring_append_character(my_string, 'a');
	cstring_append_string(my_string, "hello world");
	cstring_print(cstring);
	cstring_debug_print(cstring);
	cstring_append_cstring();
	cstring_destroy(&my_string);

	return (0);
}