/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brenohildebrand <brenohildebrand@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:36:13 by brenohildeb       #+#    #+#             */
/*   Updated: 2023/10/24 14:54:24 by brenohildeb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include "../basic/basic.h"

typedef struct s_file {
	t_string			path;
	t_filemode			mode;
	int					fd;
	// t_fileattributes	
	t_dynamicbuffer		dbuffer;
}	t_file;

#endif
