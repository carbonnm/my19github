/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:29:07 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 13:21:53 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char  *ft_strdup(char *src)
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
