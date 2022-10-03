/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <nsainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:35:10 by nsainton          #+#    #+#             */
/*   Updated: 2022/10/03 11:01:33 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stddef.h>

void	ft_add_tab(int *tab, int size, int index, int dig);

void	ft_put_nbr_tab(int *tab, int size, int *index, int nbr);

int	ft_strlen(char *str);

void	ft_putstr(char *str);

#endif
