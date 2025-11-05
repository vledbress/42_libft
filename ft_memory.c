/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:45:23 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/05 22:27:53 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p;

    p = s;
    while (n--)
        *p++ = (unsigned char)c;
    return (s);
}

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

void *ft_memcpy(void   *dest, const void   *src, size_t n)
{
    unsigned char   *dummy_dest;
    const unsigned char   *dummy_src;

    dummy_dest = dest;
    dummy_src = src;
    while (n--)
        *dummy_dest++ = *dummy_src++;
    return (dest);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *dummy_dest;
    const unsigned char   *dummy_src;

    dummy_dest = dest;
    dummy_src = src;

    if (dummy_dest > dummy_src)
    {
        dummy_dest += n - 1;
        dummy_src += n - 1;
        while(n--)
            *dummy_dest-- = *dummy_src--;
    }
    else if (dummy_dest < dummy_src)
    {
        while(n--)
            *dummy_dest++ = *dummy_src++;
    }
    return (dest);
}
