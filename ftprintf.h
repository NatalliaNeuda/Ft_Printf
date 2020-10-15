/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:47:22 by nneuda            #+#    #+#             */
/*   Updated: 2020/10/14 17:34:10 by nneuda           ###   ########.fr       */
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
	char            *type_conv;
}					t_type;


typedef struct		s_arguments {
	// t_type  		*type;
	int  		    stack_nbr;
	char            conversation;
	int				*flag;
	int				width;
	int			    length;
	char			parameter;
}					t_arguments;


#endif
