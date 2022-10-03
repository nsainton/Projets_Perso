/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <nsainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:56:34 by nsainton          #+#    #+#             */
/*   Updated: 2022/10/03 10:59:28 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (*(str + i))
		i ++;
	return (i);
}

void	ft_putstr(char *str)
{
	if (str == NULL)
		return ;
	write(1, str, ft_strlen(str));
}
