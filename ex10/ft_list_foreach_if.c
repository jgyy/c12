/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 03:43:19 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 06:19:51 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
    t_list *new_elem;

    new_elem = (t_list *)malloc(sizeof(t_list));
    if (new_elem == NULL)
        return (NULL);
    new_elem->data = data;
    new_elem->next = NULL;
    return (new_elem);
}

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
    t_list *current;

    current = begin_list;
    while (current != NULL)
    {
        if ((*cmp)(current->data, data_ref) == 0)
        {
            (*f)(current->data);
        }
        current = current->next;
    }
}
