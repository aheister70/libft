/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aheister <aheister@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 16:48:11 by aheister      #+#    #+#                 */
/*   Updated: 2020/11/18 09:59:54 by aheister      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dest_char;
	unsigned char	*src_char;
	unsigned char	un_c;

	un_c = c;
	dest_char = (unsigned char *)dst;
	src_char = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		if (src_char[i] != un_c)
			i++;
		else
			return (&dest_char[i + 1]);
	}
	dest_char = NULL;
	return (dest_char);
}
