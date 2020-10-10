/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:50:36 by nneuda            #+#    #+#             */
/*   Updated: 2020/10/09 17:08:07 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int ft_printf(char *discription, ...) 
{
   va_list ar;
   int sum_output = 0;

   va_start(ar, discription);

   if (discription == NULL)
      return (-1);
   while (*discription != '\0')
   {
      if(*discription == '%' && *(discription + 1) != '%')
      {
         //write to structure some data
      }
      else if (*discription == '%' && *(discription + 1) == '%')
      {
         discription += 2;
         write(1, "%", 1);
         
      }
      else if (*discription == '\\' && *(discription + 1) == 'n')
      {
         write(1, "\n", 1);
         discription++;
      }
      else
      {
         write (1, discription, 1);
         discription++;
         sum_output++;
      }
   }
   va_end(ar);
 
   return sum_output;
}

int main(void) 
{
   int n;

   n = ft_printf("Hello %% World\n");
   printf("%d\n", n);
   
   return 0;
}