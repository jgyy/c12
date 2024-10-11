/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 04:00:44 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 06:36:26 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *current;

    if (*begin_list1 == NULL)
    {
        *begin_list1 = begin_list2;
        return;
    }

    current = *begin_list1;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = begin_list2;
}
