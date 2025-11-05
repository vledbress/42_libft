/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:53:32 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/05 23:25:25 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strlen(const char *str)
{
    int result;

    result = 0;
    while (str[result])
        result++;
    return (result);
}

size_t ft_strlcpy(char *dst, const char * src, size_t dsize)
{
    size_t  src_len;
    size_t  index;

    src_len = ft_strlen(src);
    if (!dsize)
        return (src_len);

    index = 0;
    while (index < dsize - 1 && src[index])
    {
        dst[index] = src[index];
        index++;
    }   
    dst[index] = 0;
    return (src_len);
}

size_t ft_strlcat(char *dst, const char * src, size_t dsize)
{
    size_t  dst_len;
    size_t  src_len;
    size_t  remain_space;
    size_t  index;
    
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    
    if (dsize <= dst_len)
        return (dst_len + src_len);
    
    remain_space = dsize - dst_len - 1;
    index = 0;
    while (index < remain_space && src[index])
    {
        dst[dst_len + index] = src[index];
        index++;
    }
    dst[dst_len + index] = 0;
    return (dst_len + src_len);
}

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if (c == 0)
        return ((char *)s);
    return (NULL);
}

char *ft_strrchr(const char *s, int c)
{
    char    *last_seen;
    
    last_seen = NULL;
    while (*s)
    {
        if (*s == (char)c)
            last_seen = (char *)s;
        s++;
    }
    if (c == 0)
        return ((char *)s);
    return (last_seen);
}


int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  index;

    if (!n)
        return (0);
    index = 0;
    while (index < n - 1 && s1[index] && (s1[index] == s2[index]))
    {
        index++;
    }
    return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
