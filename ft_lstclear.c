/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smiranda <smiranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:19:14 by smiranda          #+#    #+#             */
/*   Updated: 2024/04/22 15:28:16 by smiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *ptr;
    t_list *bf;

    if (lst)
    {
        ptr = *lst;
        bf = *lst;
        while (ptr != NULL)
        {
            del(ptr->content);
            ptr = ptr->next;
            free(bf);
            bf = ptr;
        }
        *lst = NULL;
    }
}