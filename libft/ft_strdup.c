/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:29:07 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 13:29:20 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Duplication d'une chaine.
Elle renvoie un pointeur sur une nouvelle chaîne de caractères
qui est dupliquée depuis s. La mémoire occupée par cette nouvelle chaîne
est obtenue en appelant malloc, et peut donc être libérée avec free.
*/

#include "libft.h"
char  *ft_strdup(const char *s1)
{
  char  *new;
  int   i;
  int   size;

  size = 0;
  i = 0;
  while (src[size])
    src++;
  if (!(new = malloc(sizeof(char) * (size + 1))))
    return (NULL);
  while (src[i])
  {
    new[i] = src[i];
    i++;
  }
  new[i] = '\0';
  return (new);
}
