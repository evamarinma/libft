/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 19:28:00 by emarin-m          #+#    #+#             */
/*   Updated: 2025/06/28 20:53:53 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	The  strlcpy()  and  strlcat()  functions  copy and concatenate strings respectively.  They are designed to be
    safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3).  Unlike  those  func‐
    tions,  strlcpy()  and  strlcat() take the full size of the buffer (not just the length) and guarantee to NUL-
    terminate the result (as long as size is larger than 0 or, in the case of strlcat(), as long as  there  is  at
    least  one  byte  free  in  dst).   Note  that  a byte for the NUL should be included in size.  Also note that
    strlcpy() and strlcat() only operate on true “C” strings.  This means that for strlcpy() src must be  NUL-ter‐
    minated and for strlcat() both src and dst must be NUL-terminated.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size == 0)
		return (j);
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
