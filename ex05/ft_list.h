/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 03:40:14 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 04:55:30 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;

t_list *ft_create_elem(void *data);
t_list *ft_list_push_strs(int size, char **strs);

#endif
