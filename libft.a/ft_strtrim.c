/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:33:56 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 14:26:07 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue et retourne une copie de la chaine s1, sans les caractères spécifiés
dans set au début et à la fin de la chaine de caractères.
*/

#include "libft.h"
char  *ft_strtrim(char const *s1, char const *set)
{
  size_t debut;
  size_t fin;
  char  *nouveau;

  debut = 0;
  if (!s1 || !set)
    return (NULL);
  while (s1[debut] && ft_strchr(set, s1[debut]))
    debut++;
  fin = ft_strlen(s1 + debut);
  if (fin)
    while (s1[fin + debut - 1] != 0 && ft_strchr(set, s1[fin + debut - 1] != 0))
      fin--;
  if (!(nouveau = malloc(sizeof(char) * fin + 1)))
    return (NULL);
  ft_strncpy(new, s1 + debut, fin);
  nouveau[fin] = '\0';
  return (nouveau);
}
