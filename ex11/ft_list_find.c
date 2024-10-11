/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 03:43:29 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 06:26:47 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list *current;

    current = begin_list;
    while (current)
    {
        if ((*cmp)(current->data, data_ref) == 0)
            return (current);
        current = current->next;
    }
    return (NULL);
}
