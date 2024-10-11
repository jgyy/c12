/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 03:41:17 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 04:06:11 by jegoh            ###   ########.fr       */
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

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *new_elem;

    new_elem = ft_create_elem(data);
    if (new_elem == NULL)
        return;

    new_elem->next = *begin_list;
    *begin_list = new_elem;
}
