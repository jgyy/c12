/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 06:45:12 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 06:45:16 by jegoh            ###   ########.fr       */
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

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    t_list *new_elem;
    t_list *current;
    t_list *prev;

    new_elem = ft_create_elem(data);
    if (new_elem == NULL)
        return;

    if (*begin_list == NULL || cmp((*begin_list)->data, data) >= 0)
    {
        new_elem->next = *begin_list;
        *begin_list = new_elem;
        return;
    }

    current = *begin_list;
    prev = NULL;

    while (current != NULL && cmp(current->data, data) < 0)
    {
        prev = current;
        current = current->next;
    }

    new_elem->next = current;
    prev->next = new_elem;
}
