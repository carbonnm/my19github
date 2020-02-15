/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:29:03 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:55:51 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction recherche une caractere dans une chaine de caractere.
Elle renvoie un pointeur sur la premiere occurence du caractere c dans s.
Je parcours donc juste la chaine.
Si je trouve l'occurence, je la retourne.
Sinon NULL.
*/

#include "libft.h"
char  *ft_strchr(const char *s, int c)
{
  int i;

  i = 0
  while (s[i] != '\0')
  {
    if (s[i] == c)
      return (s[i]);
    i++;
  }
  return (NULL);
}
