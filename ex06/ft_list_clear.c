/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 03:42:17 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 05:02:54 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list *current;
    t_list *next;

    current = begin_list;
    while (current)
    {
        next = current->next;
        if (free_fct)
            free_fct(current->data);
        free(current);
        current = next;
    }
}
