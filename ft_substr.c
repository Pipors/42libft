/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatbir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:35:45 by aatbir            #+#    #+#             */
/*   Updated: 2022/11/11 22:56:57 by aatbir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = len;
	if (i > ft_strlen(s))
	{
		str = malloc((ft_strlen(s) + 1) * sizeof(char));
		i = ft_strlen(s) - start;
	}
	else
		str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str[0] = '\0';
		return (str);
	}
	ft_memcpy(str, s + start, i);
	str[i] = '\0';
	return (str);
}
