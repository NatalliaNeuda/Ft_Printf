/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:47:22 by nneuda            #+#    #+#             */
/*   Updated: 2020/10/09 17:37:11 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include <stdlib.h>
# include <stdio.h>
#include <stdarg.h>
# include "libft/libft.h"

typedef struct		s_type {
	int  		    stack_nbr;
	char            type_conv;
}					t_type;


typedef struct		s_arguments {
	t_type  		*type;
	char			flag;
	int				width;
	int			    length;
	char			parameter;
    int             nbr_output_char;
}					t_arguments;


#endif
