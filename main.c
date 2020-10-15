/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneuda <nneuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:50:36 by nneuda            #+#    #+#             */
/*   Updated: 2020/10/14 17:51:58 by nneuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int parse_specifiers(const char **temp_str, va_list ar, int sum_output, char conversation)
{
   t_arguments new_arg;
   int printed = 0; 

   new_arg.stack_nbr = 0;
   // find flags function
   // find width function
   // find parametter function
   new_arg.conversation = conversation;
   // print_conversation function
   return (printed);
}

const char *parser(const char **str, int sum_output, va_list ar)
{
   const char *temp_str =  *str;
   
   while (**str != 's' && **str != 'c' && **str != 'p' && **str != 'd' && **str != 'i' && **str != 'u' && **str != 'x' && **str != 'X')
   {
      (*str)++;
   }
   if (!(*str))
      return (NULL);
   sum_output += parse_specifiers(&temp_str, ar, sum_output, **str);
   // call function to write s_type structure
   (*str)++;
   
   sum_output++;
   return(*str);

}

int ft_printf(const char *discription, ...) 
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
         if (!(parser(&discription, sum_output, ar)))
            return (-1);
           
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
   int m = printf("Hello %% World%", "");

   n = ft_printf("Hello %% World%");
   printf("%d\n%d", n, m);
   
   return 0;
}