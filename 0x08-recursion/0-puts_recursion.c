#include<stdlib.h>
#include "main.h"
#include<stdio.h>

/**
  *_puts_recursion - prints a string
  *
  *@s: string to print
  *Return: Always 0
  */

void _puts_recursion(char *s)
{
        int i;
        
        for (i = 0; i > 0; i++)
         {
            if (s[i] != '\0')
            puts(s);
         }
         return;
}
