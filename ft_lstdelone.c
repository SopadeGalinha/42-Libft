/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:33:33 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/08 01:33:33 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION: 
**  Takes as a parameter a node and frees the memory of
**  the node’s content using the function ’del’ given
**  as a parameter and free the node. The memory of
**  ’next’ must not be freed.
**
**  lst: The note to free
**  del: The adress of the function used to delete the content.
**  Return Value: None
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
