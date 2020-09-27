/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoutafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 13:58:40 by pmoutafi          #+#    #+#             */
/*   Updated: 2020/09/26 14:58:14 by pmoutafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	while (dest[i] != '\0')
		++i;
	res = 0;
	while (src[res] != '\0')
		++res;
	if (size <= i)
		res += size;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
#include <stdio.h>
#include <string.h>

int	main ()
{
	char str[] = "coucou";
	char find[] = "couloir";
	unsigned int n = 3;

	printf("%ud", strlcat(str, find, n));
	
	return 0;
}

src[] = "les copains";
dest[] = "Salut ";

dest [] = "Salut les copains"
