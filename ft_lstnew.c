/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:08:58 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/07 22:08:58 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION:
    Allocates (with malloc(3)) and returns a “fresh” link.
    The variables content and content_size of the new link
   are initialized by a copy of the parameters of the function.
  If the parameter content is null, the variable content is initialized to
  NULL and the variable content_size is initialized to 0 even
  if the parameter content_size isn’t.
  
  The variable next is initialized to NULL. If the allocation fails, the
  function returns NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
