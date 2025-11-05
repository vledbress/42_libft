/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vblxssv <vblxssv@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:14:03 by vblxssv           #+#    #+#             */
/*   Updated: 2025/11/05 21:53:52 by vblxssv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

char ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int	ft_isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int ft_isalnum(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}