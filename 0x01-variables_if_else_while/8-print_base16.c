#include <stdio.h>
/**
* main - Entry point
*
* Description: This program prints all numbers of base64 in lowercase using
* only the `putchar` function and only 3 times.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
int i;
for(i = 0; i < 10; i++) 
{
putchar(i + '0');
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
