/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:29:28 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 12:38:44 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int i;

  i = 0;
  while (i < n)
  {
    if (s1 < s2)
      return (-1);
    if (s1 > s2)
      return (1);
    i++;
  }
  return (0);
}
