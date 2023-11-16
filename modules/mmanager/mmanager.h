/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmanager.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:49:27 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/16 12:00:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MMANAGER_H
# define MMANAGER_H

void	*mmanager_malloc();
void	*mmanager_calloc();
void	mmanager_free();
void	mmanager_free_all();

#endif
