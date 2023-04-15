/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:21:20 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/08 01:21:20 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Description: 
**  Adds the 'new' element at the beginning of the list.
**  Param. #1 The address of a pointer to the first link of a list.
**  Param. #2 The link to add at the beginning of the list.
*/

#include "libft.h"

t_list	ft_lstadd_front(t_list **head, t_list *new)
{
	new->next = *head;
	*head = new;
	return (*new);
}
