/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smiranda <smiranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:51:18 by smiranda          #+#    #+#             */
/*   Updated: 2024/04/22 12:22:33 by smiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*a;

	a = malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	a->content = content;
	a->next = NULL;
	return (a);
}

// int	main(void)
// {
// 	int		data;
// 	t_list	*node;

// 	data = 42;
// 	node = ft_lstnew(&data);
// 	if (node == NULL)
// 	{
// 		printf("Error: Unable to create new node\n");
// 		return (1);
// 	}
// 	printf("Content of the node: %d\n", *((int *)(node->content)));
// 	free(node);
// 	return (0);
// }
