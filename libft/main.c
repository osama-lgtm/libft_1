/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:32:27 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/10 18:21:55 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    t_list *head;
    t_list n1;
    t_list n2;
    t_list n3;

    n1 = *ft_lstnew("osama");
    n2 = *ft_lstnew("fares");
    n3 = *ft_lstnew("ahamd");

    head = &n1;
    n1.next = &n2;

    ft_lstadd_front(&head, &n3); // Now n3 is correctly added to the front

    while (head)
    {
        printf("%s\n", (char *)head->content);
        head = head->next;
    }
    return (0);
}
