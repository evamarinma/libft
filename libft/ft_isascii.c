/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:21:19 by emarin-m          #+#    #+#             */
/*   Updated: 2025/09/30 12:22:14 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	These  functions  check  whether c, which must have the value of an unsigned char or EOF, falls into a certain
    character class according to the specified locale.
	isascii() checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
