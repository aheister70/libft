/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: aheister <aheister@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 19:19:05 by aheister      #+#    #+#                 */
/*   Updated: 2020/11/18 09:54:08 by aheister      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*s_char;

	s_char = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_char[i] = 0;
		i++;
	}
	s = s_char;
}
