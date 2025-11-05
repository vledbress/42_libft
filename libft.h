/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:35:38 by vborysov          #+#    #+#             */
/*   Updated: 2025/11/05 22:20:41 by vblxssv          ###   ########.fr       */
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
int ft_strlen(char *str);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void   *dest, const void   *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
//char *ft_strlcpy(char *str);
// ft_strlcat
char ft_toupper(char c);
char ft_tolower(char c);
// ft_strchr
// ft_strrchr
// ft_strncmp
// ft_memchr
// ft_memcmp
// ft_strnstr
// ft_atoi

//calloc
//strdup
















#endif