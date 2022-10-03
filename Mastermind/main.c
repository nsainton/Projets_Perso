/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <nsainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:24:42 by nsainton          #+#    #+#             */
/*   Updated: 2022/10/03 17:22:33 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	main(void)
{
	char *buf;
	write(1, "Bonjour\n", 8);
	buf = ft_read_entry(0, 4);
	if (buf != NULL)
		ft_putstr(buf);
	write(1, "\n", 1);
	write(1, "BONJOUR\n", 8);
	free(buf);
	return (0);
}
