/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:40:31 by acan              #+#    #+#             */
/*   Updated: 2024/04/18 19:14:36 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3D.h"

void	printerror(char *error)
{
	write(2, "Error\n", 6);
	write(2, error, ft_strlen(error));
	write(2, "\n", 1);
	exit (1);
}