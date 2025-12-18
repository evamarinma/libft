/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:55:15 by emarin-m          #+#    #+#             */
/*   Updated: 2025/10/06 11:55:17 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer
    to the allocated memory.  The memory is set to zero.  If nmemb or size is 0, then calloc()  returns  a  unique
    pointer value that can later be successfully passed to free().

    If  the multiplication of nmemb and size would result in integer overflow, then calloc() returns an error.  By
    contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an
    incorrectly sized block of memory would be allocated:

        malloc(nmemb * size);
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated_mem;
	void	*zero_mem;
	size_t	mem_size;

	mem_size = nmemb * size;
	allocated_mem = malloc(mem_size);
	if (!allocated_mem)
		return (NULL);
	zero_mem = ft_memset(allocated_mem, 0, mem_size);
	if (zero_mem)
		return (zero_mem);
	return (NULL);
}
