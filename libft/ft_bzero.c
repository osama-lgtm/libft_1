/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:46:45 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/05 15:00:07 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
        unsigned char *p = s;
        while(n > 0)
        {
            *p = 0;
            p++;
            n--;
        }
}
/*
int main()
{
    int s[5] = {1, 2, 3, 4, 5};
    ft_bzero(s, sizeof(s));
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", s[i]);
    }
    return 0;
}*/