/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smiranda <smiranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:41:33 by smiranda          #+#    #+#             */
/*   Updated: 2024/04/22 12:36:14 by smiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
 new->next =*lst;
 *lst = new;   
}

// int	main(void)
// {
// 	int		data;
// 	t_list	*node;

// 	data = 42;
// 	node = ft_lstadd_front(xxx);
// 	if (node == NULL)
// 	{
// 		printf("Error: Unable to create new node\n");
// 		return (1);
// 	}
// 	printf("Content of the node: %d\n", *((int *)(node->content)));
// 	free(node);
// 	return (0);
// }