/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:40:06 by marvin            #+#    #+#             */
/*   Updated: 2019/09/10 13:40:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include "libft/libft.h"

# define MAX_TETRI 26
# define TET_CON 21

typedef struct s_map
{
	int val;
	struct s_map *next;

}		t_map;

typedef struct	s_tet
{
	int x;
	int y;
	struct s_tet *next;
}				t_tet; 

typedef struct node
{
	int data;
	struct node * next;
}node;



#endif