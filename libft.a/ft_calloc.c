/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:26:21 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 13:24:08 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
