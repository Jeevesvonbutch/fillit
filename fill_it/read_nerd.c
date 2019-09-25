/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_nerd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:58:00 by marvin            #+#    #+#             */
/*   Updated: 2019/09/10 13:58:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tet_pos(int x, int y)
{
	return ((y * 5) - (6 - x));
}

int		*tet_list(char **s)
{
	t_tet *head;
	t_tet *temp;
	int		x;
	int		y;

	head = NULL;
	temp = NULL;
	while (*s == "." || *s == "#" || *s == "\n")
	{
		temp = (t_tet*)malloc(sizeof(t_tet));
		if (*s == "#")
		{
			head = temp;

		}
		if (*s == "#")
			x = 0;
		
	}
}

int		ft_read_tetri(int fd)
{
	char	*buf;
	int		count;
	char	*s;
	static char *str;
	int		row = 4;
	int		col = 5;
	if (str == 0)
		str = "";
	while ((count = read(fd, buf, 21)) >= 20)
	{
		tetri_list(s);
	}
}