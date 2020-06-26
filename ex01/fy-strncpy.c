/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fy-strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:55:13 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/26 09:25:41 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int size;

	i = 0;
	size = 0;

		while (src[i] && i < n)
		{
			dest[i] = src[i];
			i++;
		}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


