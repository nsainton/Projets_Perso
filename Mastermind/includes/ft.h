/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <nsainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:35:10 by nsainton          #+#    #+#             */
/*   Updated: 2022/10/03 17:19:43 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>

void	ft_add_tab(int *tab, int size, int index, int dig);

void	ft_put_nbr_tab(int *tab, int size, int *index, int nbr);

int		ft_strlen(char *str);

void	ft_putstr(char *str);

int		ft_strncat(char *dest, char *src, unsigned int n, unsigned int size);

int		ft_is_in(char *buf, char c, unsigned int size);

char	*ft_allocate(unsigned int number);

char	*ft_read_entry(int fd, unsigned int number);
#endif
