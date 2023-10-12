/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mode.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:50:20 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/07 22:50:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGRAM_MODE_H
# define PROGRAM_MODE_H

# define DEBUG_MODE 0x00
# define RELEASE_MODE 0x01

# ifndef MODE
#  define MODE RELEASE_MODE
# endif

#endif