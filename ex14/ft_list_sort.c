/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 04:00:54 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 06:37:34 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

static void swap_nodes(t_list *a, t_list *b)
{
    void *temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
    int swapped;
    t_list *ptr1;
    t_list *lptr = NULL;

    if (begin_list == NULL || *begin_list == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = *begin_list;

        while (ptr1->next != lptr)
        {
            if ((*cmp)(ptr1->data, ptr1->next->data) > 0)
            {
                swap_nodes(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}
