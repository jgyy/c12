/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 04:01:08 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 06:43:55 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

static int ft_list_size(t_list *begin_list)
{
    int size = 0;
    while (begin_list)
    {
        size++;
        begin_list = begin_list->next;
    }
    return size;
}

static t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    unsigned int i = 0;
    while (i < nbr && begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return begin_list;
}

void ft_list_reverse_fun(t_list *begin_list)
{
    int size = ft_list_size(begin_list);
    int i = 0;
    int j = size - 1;
    void *temp;

    while (i < j)
    {
        t_list *first = ft_list_at(begin_list, i);
        t_list *second = ft_list_at(begin_list, j);

        temp = first->data;
        first->data = second->data;
        second->data = temp;

        i++;
        j--;
    }
}
