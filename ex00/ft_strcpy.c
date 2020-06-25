/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:50:36 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/25 16:58:40 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>


char	*ft_strcpy(char *dest, char *src)
{

	char *relocate;
	
	relocate = dest;
	while((*relocate = *src ) != '\0');
	return (dest);
}
