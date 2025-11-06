/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vborysov <vborysov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:50:32 by vborysov          #+#    #+#             */
/*   Updated: 2025/11/06 15:49:00 by vborysov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

int	main(void)
{
	const char* str = "   ilka pidor        totalny  ";
	char** arr = ft_split(str, ' ');

	for(int i = 0; arr[i]; ++i)
		printf("%s\n", arr[i]);


	for(int i = 0; arr[i]; ++i)
		free(arr[i]);
	free(arr);
    return 0;
}