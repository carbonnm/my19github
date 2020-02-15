/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:26:21 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 13:26:50 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocation et liberation dynamique de la memoire.
Calloc alloue la mémoire nécessaire pour un tableau de nmemb éléments
de taille size octets, et renvoie un pointeur vers la mémoire allouée.
Elle retourne un pointeur sur la mémoire allouée, qui est correctement
alignée pour n'importe quel type de variable.
Sinon NULL.
*/

#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
  void *resultat;
  int i;

  i = 0;
  if (count == 0 || size == 0)
    return (NULL);
  resultat = malloc(count * size);
  if resultat == NULL
    return (NULL);
  while (i <= count)
  {
    ((char *) resultat)[i]= 0;
    i++;
  }
  return (resultat);
}
