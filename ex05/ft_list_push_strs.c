/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 03:42:06 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 04:55:40 by jegoh            ###   ########.fr       */
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

t_list *ft_list_push_strs(int size, char **strs)
{
    t_list *list;
    t_list *new_elem;
    int i;

    list = NULL;
    i = 0;
    while (i < size)
    {
        new_elem = ft_create_elem(strs[i]);
        if (new_elem == NULL)
            return (NULL);
        new_elem->next = list;
        list = new_elem;
        i++;
    }
    return (list);
}
