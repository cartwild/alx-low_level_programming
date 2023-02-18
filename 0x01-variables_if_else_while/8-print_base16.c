#include <stdio.h>
/**
* main - Entry point
* Description: prints all numbers of base64 in lowercase
* only the `putchar` function and only 3 times.
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
