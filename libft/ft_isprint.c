/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:47:12 by emarin-m          #+#    #+#             */
/*   Updated: 2025/06/26 15:42:26 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	These  functions  check  whether c, which must have the value of an unsigned char or EOF, falls into a certain
    character class according to the specified locale.
	isprint() checks for any printable character including space.
*/


int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
