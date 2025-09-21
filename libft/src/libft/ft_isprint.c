/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoehne <phoehne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:33:31 by so_long           #+#    #+#             */
/*   Updated: 2025/09/21 12:26:32 by so_long          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isprint() checks for any printable character
	including space (ASCII 32 - 126).

	The value returned is nonzero if the character c falls into
	the tested class, and zero if not.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
