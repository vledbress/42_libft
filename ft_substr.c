/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vborysov <vborysov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:07:52 by vborysov          #+#    #+#             */
/*   Updated: 2025/11/06 15:36:50 by vborysov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	index;

	index = 0;
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	while (index < len && s[index + start])
	{
		result[index] = s[index + start];
		index++;
	}
	result[index] = 0;
	return (result);
}
