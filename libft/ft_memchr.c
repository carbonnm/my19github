/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:28:20 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 17:17:24 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction sert a rechercher un caractere dans une zone memoire.
Elle examine les n premiers octets de la zone memoire pointee par s.
Des qu'elle rencontre le caractere c, elle arrete de chercher.
je vais creer a nouveau un pointeur correspondant a s.
Je parcours la chaine de caractere.
Si je trouve c, je renvoie un pointeur sur l'octet correspondant.
Sinon NULL.
*/

#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
  unsigned char  *str;
  int i;

  str = (unsigned char *)s;
  i = 0;
  while (i < n)
  {
    if (str[i] == (unsigned char)c)
      return (str[i]);
    i++;
  }
  return (NULL);
}
