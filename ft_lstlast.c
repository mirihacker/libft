/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smiranda <smiranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:32:52 by smiranda          #+#    #+#             */
/*   Updated: 2024/04/22 14:40:04 by smiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *ptr;

    if (lstr == NULL)
        return(0);
    ptr = lst;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    return(ptr);
}
