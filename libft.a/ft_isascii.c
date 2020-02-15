/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:27:30 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:50:13 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Vérifie si c est un unsigned char sur 7 bits,
entrant dans le jeu de caractères ASCII.
*/

#include "libft.h"
int ft_isascii(int c)
{
  if ((c >= 0 ) && (c <= 127 ))
    return (1);
  return (0);
}
