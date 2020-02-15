/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:29:23 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:46:30 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction calcule la longueur d'une chaine de caracteres.
Elle s'incrementera jusqu'a '\0'.
*/

#include "libft.h"
size_t  ft_strlen(char *s)
{
  int i;

  i = 0;
  while (s[i] != '\0')
    i++;
  return (i);
}
