/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:28:06 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/26 09:41:15 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char 	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;

	if (to_find == NULL || str == NULL)
		return (str);
	if (to_find != NULL)
	{
		while (str[x] != '\0' && to_find[y] != '\0'){
			while (str[x] == to_find[y])
			{
				x++;
				y++;
			}
			x++;
		}
		return &str[x -y - 1];
	}
	else 
		return NULL;
}
