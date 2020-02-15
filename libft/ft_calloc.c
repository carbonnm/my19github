/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:26:21 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 16:00:20 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocation et liberation dynamique de la memoire.
Calloc alloue la mémoire nécessaire pour un tableau de count éléments
de taille size octets, et renvoie un pointeur vers la mémoire allouée.
Elle retourne un pointeur sur la mémoire allouée, qui est correctement
alignée pour n'importe quel type de variable.
Sinon NULL.
Si le nombre d'elements dans le tableau et la taille des octets est nulle,
je retourne NULL.
Le resultat sera la memoire necessaire a la taille * nb elements.
Il ne doit pas etre NULL sinon je retourne NULL.
Toutes les confitions sont remplies : je remplis donc mon tableau
avec des 0 sur tout le resultat necessaire et je le retourne.
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
  if (resultat == NULL)
    return (NULL);
  while (i <= count)
  {
    ((char *) resultat)[i]= 0;
    i++;
  }
  return (resultat);
}
