/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:27:56 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 17:15:46 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction copie AU PLUS n octets de la zone memoire src vers
la zone memoire dst en s'arretant des qu'elle rencontre le caractere c.
Elle renvoie un pointeur sur le caractere immediatement apres c dans dest.
Sinon NULL.
Je cree donc les deux pointeurs s'apparentant a dst et src.
Si je trouve une occurence dans les n premiers octets, je retourne
un pointeur sur le caractere durect apres.
*/

#include "libft.h"
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
  unsigned char  *dest;
  unsigned char  *source;
  int i;

  dest = (unsigned char *)dst;
  source = (unsigned char *)src;
  i = 0;
  while (i < n)
  {
    dest[i] = source[i];
    if (dest[i] == (unsigned char)c)
      return ((void *)(dst + i + 1));
    i++;
  }
  return (NULL);
}
