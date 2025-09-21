/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoehne <phoehne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:01:10 by so_long           #+#    #+#             */
/*   Updated: 2025/09/21 12:26:32 by so_long          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isdigit() checks for a digit (0 through 9 / ASCII 48 - 57).

	The value returned is nonzero if the character c falls into
	the tested class, and zero if not.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
