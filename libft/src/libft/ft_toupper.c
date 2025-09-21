/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoehne <phoehne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 08:13:41 by so_long           #+#    #+#             */
/*   Updated: 2025/09/21 12:26:32 by so_long          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	toupper() converts lowercase letters to upperrcase

	The value returned is that of the converted letter,
	or c if the conversion was not possible.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
