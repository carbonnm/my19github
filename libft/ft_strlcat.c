/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:29:11 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 13:20:13 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Concatenation de chaines limitees par la taille.
Elle ajoute la chaine terminee par NULL src a la fin de dst.
Il ajoutera au plus la taille - 1 octet de dst,
mettant fin au resultat NULL.
Elle renvoie la longueur initiale de dst plus la longueur de src.
*/

#include "libft.h"
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
  size_t  i;
  size_t  j;
  size_t  resultat;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    resultat++;
  if (size <= i)
    resultat += size;
  else
    resultat += i;
  while (src[j] != '\0' && i + 1 < size)
  {
    dest[i] = src[j];
    i++;
    j++;
  }
  dest[i] = '\0';
  return (resultat);
}
