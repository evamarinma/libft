/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:59:21 by emarin-m          #+#    #+#             */
/*   Updated: 2025/06/26 17:10:49 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	If  c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation exists
    in the current locale.  Otherwise, it returns c.
*/

static int	is_alpha_cap(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int	ft_tolower(int c)
{
	if (is_alpha_cap(c))
	{
		c += 32;
	}
	return (c);
}
