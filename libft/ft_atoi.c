/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:52:46 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 15:51:58 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*atoi permet de convertir une chaine de caracteres en un entier.
Cette fonction prend donc en parametre une chaine de caracteres.
J'initialise le resultat et le fait d'etre negatif ou pas (qui va jouer).
Je mets par defaut la variable negative a 1, je ;a changerai a -1 si c'est negatif.
En premier lieu, tant qu'il y a les caracteres speciaux precises au debut,
j'avance dans la chaine de caracteres car ces caracteres ne sont pas
a prendre en compte.
Ensuite, si le pre;ier caractere de signe rencontre est un -, negative = -1.
Je ne prends par apres plus les caracteres de signe en compte.
Tant que le caractere est entre 0 et 9, il le convertit.
Il retourne le resultat * la variable negative pour avoir le nombre correct.
*/

#include "libft.h"
int ft_atoi(const char *str)
{
  long resultat;
  int negative;
  int i;

  i = 0;
  resultat = 0;
  negative = 1;
  while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'||
          str[i] == '\t' || str[i] == '\r' || str[i] == '\f')
        i++;
  if (str[i] == '-')
    negative = -1;
  if (str[i] == '-' || str[i] == '+')
    i++;
  while (str[i] >= '0' && str[i] <= '9')
  {
    resultat = resultat * 10 + (str[i] - '0');
    if (resultat < 0)
      return (negative > 0 ? -1 : 0);
    i++;
  }
  return (resultat * negative);
}
