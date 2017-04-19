/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 17:04:00 by asvirido          #+#    #+#             */
/*   Updated: 2017/04/14 17:04:01 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

t_color  get_color(t_rtv1 *rtv1, int num_obj)
{
   t_color color;

   if (rtv1->rt_obj[num_obj].plane != NULL)
      color= rtv1->rt_obj[num_obj].plane->color;
   else if (rtv1->rt_obj[num_obj].sphere != NULL)
      color = rtv1->rt_obj[num_obj].sphere->color;
   return (color);
}