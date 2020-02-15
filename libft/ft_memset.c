/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:28:55 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 17:26:48 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Memset remplit une zone de memoire avec un octet donne.
Elle remplit les len premiers octets de la zone memoire pointee par b.
Elle va les remplir avec l'octet c.
Puisque je ne peux pas directement remplir cette zone comme ca,
je cree un pointeur, qui lui sera egal a ce b.
Grace a ca, je peux remplir avec l'octet c mon p sur la taille voulue.
*/

#include "libft.h"
void *ft_memset(void *b, int c, size_t len)
{
  unsigned char  *p;
  if ( b == 0)
    return (NULL);
  if (len == 0)
    return (b);
  p = (unsigned char *)b;
  while (len-- > 0)
  {
    *p = (char)c;
    p++;
  }
  return (b);
}
