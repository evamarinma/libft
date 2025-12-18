/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:56:52 by emarin-m          #+#    #+#             */
/*   Updated: 2025/10/16 14:56:53 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	Applies 'f' function to every character of 's' string, giving its index as first parameter, and the
	current character as the second parameter. Allocates and returns a new string with the result of
	applying said function to the original string.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	char			*str;
	size_t			i;

	i = 0;
	str = (char *)s;
	if (str == NULL || f == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!new_str)
		return (NULL);
	while (str[i])
	{
		new_str[i] = f(i, str[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
