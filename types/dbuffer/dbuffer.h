/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbuffer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:46:17 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/07 22:46:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DBUFFER_H
# define DBUFFER_H

# include "../primitive/primitive.h"
# include "../status/status.h"

# define DBUFFER_INITIAL_TOTAL 1
# define DBUFFER_REALLOC_FACTOR 2

typedef struct s_i8_dbuffer {
    t_u32	used;
    t_u32	total;
    t_i8	*content;
}	t_i8_dbuffer;

typedef struct s_u8_dbuffer {
    t_u32	used;
    t_u32	total;
    t_u8	*content;
}	t_u8_dbuffer;

typedef struct s_i16_dbuffer {
    t_u32	used;
    t_u32	total;
    t_i16	*content;
}	t_i16_dbuffer;

typedef struct s_u16_dbuffer {
    t_u32	used;
    t_u32	total;
    t_u16	*content;
}	t_u16_dbuffer;

typedef struct s_i32_dbuffer {
	t_u32	used;
	t_u32	total;
	t_i32	*content;
}	t_u32_dbuffer;

typedef struct s_u32_dbuffer {
    t_u32	used;
    t_u32	total;
    t_u32	*content;
}	t_u32_dbuffer;

typedef struct s_i64_dbuffer {
	t_u32	used;
	t_u32	total;
	t_i64	*content;
}	t_i64_dbuffer;

typedef struct s_u64_dbuffer {
    t_u32	used;
    t_u32	total;
    t_u64	*content;
}	t_u64_dbuffer;

typedef struct s_f32_dbuffer {
    t_u32	used;
    t_u32	total;
    t_f32	*content;
}	t_f32_dbuffer;

typedef struct s_f64_dbuffer {
    t_u32	used;
    t_u32	total;
    t_f64	*content;
}	t_f64_dbuffer;

typedef struct s_isize_dbuffer {
    t_u32	used;
    t_u32	total;
    t_isize	*content;
}	t_isize_dbuffer;

typedef struct s_usize_dbuffer {
    t_u32	used;
    t_u32	total;
    t_usize	*content;
}	t_usize_dbuffer;

typedef struct s_custom_dbuffer {
	t_u32	used;
	t_u32	total;
	t_usize	*content;
}	t_custom_dbuffer;

t_status	custom_dbuffer_create(t_custom_dbuffer **custom_dbuffer_address, t_custom_dbuffer_options options);
t_status	

t_status	u8_dbuffer_create(t_u8_dbuffer **dbuffer_address);
t_status	u8_dbuffer_append_character(t_u8_dbuffer *dbuffer);
t_status	u8_dbuffer_append_string(t_u8_dbuffer *dbuffer);
t_status	u8_dbuffer_destroy(t_u8_dbuffer **dbuffer_address);

t_status	u8_dbuffer_realloc(t_u8_dbuffer *dbuffer);

#endif