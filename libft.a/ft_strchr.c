/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:29:03 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 12:38:25 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char  *ft_strchr(const char *s, int c)
{
  int i;

  i = 0
  while (s[i] != '\0')
  {
    if (s[i] == c)
      return (s[i]);
    i++;
  }
  return (NULL);
}
