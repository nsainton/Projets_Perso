/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <nsainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:49:16 by nsainton          #+#    #+#             */
/*   Updated: 2022/10/03 17:24:00 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_is_in(char *buf, char c, unsigned int size)
{
	int	i;

	if (buf == NULL)
		return (0);
	i = 0;
	while (i < (int)size)
	{
		if (*(buf + i) == c)
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_allocate(unsigned int number)
{
	char	*ns;
	int		count;

	if (! number)
		return (NULL);
	count = 0;
	ns = NULL;
	while (! ns && count < 5)
	{
		ns = (char *)malloc((number + 1) * sizeof(char));
		count ++;
	}
	if (ns != NULL)
		*ns = 0;
	return (ns);
}

char	*ft_read_entry(int fd, unsigned int number)
{
	char				buf[4096];
	char				*s_read;
	unsigned int		count;
	int					n_read;

	s_read = ft_allocate(number);
	if (s_read == NULL)
		return (NULL);
	count = 0;
	n_read = read(fd, buf, 4096);
	while (n_read > 0)
	{
		if (count < number)
			ft_strncat(s_read, buf, number - count, 4096);
		count += n_read;
		n_read = read(fd, buf, 4096);
	}
	return (s_read);
}
