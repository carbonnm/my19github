/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:31:05 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:53:24 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifie si on a un caractere qui peut etre converti en minuscule.
*/

#include "libft.h"
int ft_tolower(int c)
{
  if (( c >= 65) && (c <= 90))
    return (c + 32);
  return (c);
}
