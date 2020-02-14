/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:29:11 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 12:55:39 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
