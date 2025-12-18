/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:59:21 by emarin-m          #+#    #+#             */
/*   Updated: 2025/06/26 17:09:59 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	If  c is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists
    in the current locale.  Otherwise, it returns c.
*/

static int	is_alpha_nocap(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	ft_toupper(int c)
{
	if (is_alpha_nocap(c))
	{
		c -= 32;
	}
	return (c);
}
