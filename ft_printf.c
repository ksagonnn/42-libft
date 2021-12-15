/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:53:12 by ksagon            #+#    #+#             */
/*   Updated: 2021/12/15 15:38:36 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdarg.h>

int	ft_printf(const char *input, ...)
{
	va_list;
	va_start(args, input);
	char c;

	c = 0;
	if (c != "%")
		write (1, &c, 1);
}

void ft_printf_args(char convert, va_list args, int *rcount)
{
	if (c == %)
}

int ft_printf_char(int c, int *rcount)
{
	return (ft_putchar(c) + 1)
}

int ft_printf_str(char *str, int *rcount)
{
	if (c == NULL)
		return (ft_putstr_fd(NULL));
	else if
		return (ft_putstr_fd(str));
}
int ft_printf_ptr(char *ptr, int *rcount)
int ft_printf_int(int nbr, int *rcount)
int ft_printf_dun(unsigned int nbr, int *rcount)
int ft_printf_hex(unsigned long nbr, int *rcount, int format)
{
}













//utiliser plein de if
//d et i pareil (putnbr)
//x unsigned int X maj min
//p unsigned long PAREIL
//while (c == %)
//	aller dans une autre fonction selon ce qui suit le pourcentage








//%c (imprime un seul caractere)
	c = 0;
	if (c < 0 || c > 127)
		return (0)
	else if (c >= 0 && c <= 127)
		write (1, &c, 1);
//%% (imprime un symbole %)
	const char	percent;

	percent = "%";
	write (1,&percent, 1);

//%p (imprime en hexa un pointeur void*)
	 static void decToHexa(int n)
    {
        // char array to store
        // hexadecimal number
        char[] hexaDeciNum = new char[100];
 
        // counter for hexadecimal number array
        int i = 0;
        while (n != 0) 
		{
            // temporary variable to store remainder
            int temp = 0;
 
            // storing remainder in temp variable
            temp = n % 16;
 
            // check if temp < 10
            if (temp < 10) {
                hexaDeciNum[i] = (char)(temp + 48);
                i++;
            }
            else {
                hexaDeciNum[i] = (char)(temp + 55);
                i++;
            }
 
            n = n / 16;
        }
        // printing hexadecimal number
        // array in reverse order
        for (int j = i - 1; j >= 0; j--)
            Console.Write(hexaDeciNum[j]);
    }
    // Driver Code
    public static void Main(String[] args)
    {
        int n = 2545;
        decToHexa(n);
    }
}

//%




	int	index = 1
	%% write (1,"%",1)
	%x write (1,"16",2)
	%s while (Sindex != \0)
   		Sindex++;
	%c while (c != c)
		c++;
	%p write (1, &s, 1)
	%d write(1, "10", 2)
	%i write (1, "10", 2)
	%u write (1, "10", 2)
}
