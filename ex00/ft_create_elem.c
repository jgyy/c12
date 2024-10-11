/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 03:41:01 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 04:03:41 by jegoh            ###   ########.fr       */
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
