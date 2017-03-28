/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:29:03 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/23 18:29:04 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

double		module_vector(t_vector *a)
{
	double	x_2;
	double	y_2;
	double	z_2;

	x_2 = a->x * a->x;
	y_2 = a->y * a->y;
	z_2 = a->z * a->z;
	return (sqrt(x_2 + y_2 + z_2));  
}
