/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:34:06 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 14:16:51 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue et retourne une chaine de caractères issue de la chaine s.
Cette nouvelle chaine commence à l’index start et
a pour taille maximale len.
*/

#include "libft.h"
char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t  count;
  size_t  size;
  char    *tab;

  count = 0;
  if(!s)
    return (NULL);
  if (ft_strlen(s) < start)
    return (ft_strdup(""));
  size = ft_strlen(s + start);
  if (size < len)
    len = size;
  if (!(tab = (char *)malloc((len + 1) * sizeof(char))))
    return (NULL);
  while (count < len)
  {
    tab[count] = s[start + count];
    count++;
  }
  tab[count] = '\0';
  return (tab);
}
