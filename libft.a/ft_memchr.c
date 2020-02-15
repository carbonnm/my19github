/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:28:20 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:41:30 by cmarie           ###   ########.fr       */
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
  char  *str;
  int i;

  str = s;
  i = 0;
  while (i < n)
  {
    if (str[i] == (char)c)
      return (str[i])
    i++;
  }
  return (NULL);
}
