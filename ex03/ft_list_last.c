/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 03:41:43 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 04:17:53 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_list_last(t_list *begin_list)
{
    if (begin_list == NULL)
        return NULL;

    while (begin_list->next != NULL)
    {
        begin_list = begin_list->next;
    }

    return begin_list;
}
