/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 03:41:29 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 04:16:49 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int ft_list_size(t_list *begin_list)
{
    int count = 0;
    t_list *current = begin_list;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}
