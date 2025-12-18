/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarin-m <emarin-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:55:52 by emarin-m          #+#    #+#             */
/*   Updated: 2025/10/09 16:55:53 by emarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
	These  functions  check  whether c, which must have the value of an unsigned char or EOF, falls into a certain
    character class according to the specified locale.
	isalnum() checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
*/

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
