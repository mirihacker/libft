/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smiranda <smiranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:36:56 by smiranda          #+#    #+#             */
/*   Updated: 2024/04/22 12:43:33 by smiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list *ptr;

    if (lst == NULL)
        return(0);
    ptr = lst;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        i++;
    }
    return(i);
}