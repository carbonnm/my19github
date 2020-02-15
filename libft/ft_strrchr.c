/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:30:50 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:59:06 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction recherche un caractere dans une chaine de caracteres.
Elle renvoie un pointeur sur la derniere occurence du caractere c dans s.
Je trouve la taille de s grace a ft_strlen.
je vais donc parcourir grace a ca la chaine a reculons.
Je retourne la premiere occurence que je trouve.
Sinon NULL.
*/

#include "libft.h"
char  *ft_strrchr(const char *s, int c)
{
  int i;

  i = ft_strlen(s);
  while(i-- > 0)
  {
    if (s[i] == c)
      return (s[i]);
  }
  return (NULL);
}
