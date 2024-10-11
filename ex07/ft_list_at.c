/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 03:42:30 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 05:39:21 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list *current;
    unsigned int i;

    if (begin_list == 0)
        return (0);

    current = begin_list;
    i = 0;

    while (current != 0)
    {
        if (i == nbr)
            return (current);
        current = current->next;
        i++;
    }

    return (0);
}
