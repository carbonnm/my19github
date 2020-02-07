/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:52:46 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 12:52:50 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int ft_atoi(const char *str)
{
  int resultat;
  int negative;
  int i;

  i = 0;
  resultat = 0;
  negative = 1;
  while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'||
          str[i] == '\t' || str[i] == '\r' || str[i] == '\f')
        i++;
  if str[i] == '-'
    negative = -1;
  if (str[i] == '-' || str[i] == '+')
    i++;
  while (str[i] >= '0' && str[i] <= '9')
  {
    resultat = resultat * 10 + (str[i] + 48);
    i++;
  }
  return (resultat * negative);
}
