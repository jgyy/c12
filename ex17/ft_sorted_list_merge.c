/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 04:01:31 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 06:47:39 by jegoh            ###   ########.fr       */
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

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    t_list *current1;
    t_list *current2;
    t_list *temp;

    if (*begin_list1 == NULL)
    {
        *begin_list1 = begin_list2;
        return;
    }

    if (begin_list2 == NULL)
        return;

    current1 = *begin_list1;
    current2 = begin_list2;

    if ((*cmp)(current1->data, current2->data) > 0)
    {
        temp = current2->next;
        current2->next = current1;
        *begin_list1 = current2;
        current2 = temp;
    }

    while (current1->next != NULL && current2 != NULL)
    {
        if ((*cmp)(current1->next->data, current2->data) > 0)
        {
            temp = current2->next;
            current2->next = current1->next;
            current1->next = current2;
            current2 = temp;
        }
        current1 = current1->next;
    }

    if (current2 != NULL)
        current1->next = current2;
}
