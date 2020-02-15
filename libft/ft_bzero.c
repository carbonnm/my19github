/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:36:40 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:13:50 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Bzero ecrit des octets de valeur zero dans un bloc d'octets.
Elle va mettre a 0 les n premiers octets du bloc memoire pointe par s.
Je cree donc a un nouveau un pointeur qui sera egal a mon s.
Je vais venir le remplir avec des '\0'.
*/

#include "libft.h"
void	ft_bzero(void *s, size_t, n)
{
	char *p;

	p = s;
	while (len-- > 0)
	{
		*p = '\0'
		p++;
	}
	return (b);
}
