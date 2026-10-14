/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:30:57 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/10 18:33:32 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new;
    void *temp;
    if(!lst)
        return NULL;
        temp = lst->content;
    new = ft_lstnew(temp);
    if(!new)
        return NULL;
    lst = lst->next;
    while(lst)
    {
        ft_lstiter(lst, f);
        new->content = lst->content;
        ft_lstadd_back(new, lst)
        


}