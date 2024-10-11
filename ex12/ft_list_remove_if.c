/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 04:00:29 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 06:31:03 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *current;
    t_list *prev;
    t_list *temp;

    if (!begin_list || !*begin_list)
        return;

    current = *begin_list;
    prev = NULL;

    while (current)
    {
        if ((*cmp)(current->data, data_ref) == 0)
        {
            if (prev)
                prev->next = current->next;
            else
                *begin_list = current->next;

            temp = current;
            current = current->next;
            (*free_fct)(temp->data);
            free(temp);
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
}
