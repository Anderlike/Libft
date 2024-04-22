/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:31:24 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/22 13:32:40 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = "Primeiro";
	head->next = NULL;

	ft_lstadd_back(&head, (t_list *)malloc(sizeof(t_list)));
	head->next->content = "Segundo";
	head->next->next = NULL;

	ft_lstadd_back(&head, (t_list *)malloc(sizeof(t_list)));
	head->next->next->content = "Terceiro";
	head->next->next->next = NULL;

	printf("Lista:\n");
	t_list *current = head;
	while (current)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}

	current = head;
	t_list *next;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	return (0);
}*/