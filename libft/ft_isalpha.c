/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:51:08 by emarin-m          #+#    #+#             */
/*   Updated: 2025/10/09 16:51:24 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	These  functions  check  whether c, which must have the value of an unsigned char or EOF, falls into a certain
    character class according to the specified locale.
	isalpha() checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) ||  is‐
    lower(c)).   In  some  locales,  there may be additional characters for which isalpha() is true—letters
    which are neither uppercase nor lowercase.
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	else
		return (0);
}
