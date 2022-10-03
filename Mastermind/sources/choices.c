/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choices.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <nsainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:04:01 by nsainton          #+#    #+#             */
/*   Updated: 2022/10/01 21:34:35 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/structs.h"
#include "../includes/ft.h"

void	ft_add_tab(int *tab, int size, int index, int dig)
{
	if (index > size - 1)
		return ;
	*(tab + index) = dig;
}

void	ft_put_nbr_tab(int *tab, int size, int *index, int nbr)
{
	if (tab == NULL || index == NULL)
		return ;
	if(nbr / 10)
	{
		ft_put_nbr_tab(tab, size, index, nbr / 10);
		ft_put_nbr_tab(tab, size, index, nbr % 10);
	}
	else
	{
		ft_add_tab(tab, size, *index, nbr);
		*index += 1;
	}
}
