/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:35:38 by vborysov          #+#    #+#             */
/*   Updated: 2025/11/05 23:25:05 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>




int ft_isalpha(char c);
int ft_isdigit(char c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(char c);
int ft_strlen(const char *str);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void   *dest, const void   *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t ft_strlcpy(char *dst, const char * src, size_t dsize);
size_t ft_strlcat(char *dst, const char * src, size_t dsize);
char ft_toupper(char c);
char ft_tolower(char c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);

// ft_memcmp
// ft_strnstr
// ft_atoi

//calloc
//strdup
















#endif