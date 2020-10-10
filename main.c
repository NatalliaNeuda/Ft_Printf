/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:50:36 by nneuda            #+#    #+#             */
/*   Updated: 2020/10/09 18:19:59 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

char *parser(char **str, int sum_output)
{
   
   while (**str != 's')
   {
      //call function  to write s_arg struct
      (*str)++;
   }
   // call function to write s_type structure
   (*str)++;
   
   sum_output++;
   return(*str);

}

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
         parser(&discription, sum_output);
         //write to structure data
      }
      else if (*discription == '%' && *(discription + 1) == '%')
      {
         discription +=2;
         write(1, "%", 1);
         sum_output++;
      }
      else if (*discription == '\\' && *(discription + 1) == 'n')
      {
         write(1, "\n", 1);
         sum_output++;

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
   int m = printf("Hello %% World%s\n", "");

   n = ft_printf("Hello %% World%s\n");
   printf("%d\n%d", n, m);
   
   return 0;
}