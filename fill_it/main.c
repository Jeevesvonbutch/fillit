/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:54:50 by marvin            #+#    #+#             */
/*   Updated: 2019/09/10 13:54:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fillit.h"
#include <stdio.h>

node *cll(int n)
{
	int i = 0;
	node * head = NULL;
	node *temp = NULL;
	node * p = NULL;

	for (i = 0; i < n; i++)
	{
		temp = (node*)malloc(sizeof(node));
		printf("\nEnter the data for node number %d: ", i +1);
		scanf("%d", &(temp->data));
		temp->next = NULL;
		if (head == NULL)
			head = temp;
		else
		{
			p = head;
			while (p->next != NULL)
				p = p->next;
			p->next = temp;
		}
	}
	return (head);
	
}
void dll(node *head)
{
	node *p = head;
	while(p != NULL)
	{
		printf("\t%d->", p->data);
		p = p->next;
	}
}

int		main()
{
	int n = 0;
	node *HEAD = NULL;
	printf("\nHow many nodes: ");
	scanf("%d", &n);
	HEAD = cll(n);
	dll(HEAD);
	printf("\n");

	return (0);
}