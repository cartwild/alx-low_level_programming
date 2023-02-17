#include <stdio.h>
#include <stdlib.h>
/* main - assigns a random number to int n everytime */
int main(void)
{
int n;
srand(time(0));

n = rand() - RAND_MAX / 2;
printf("The random number is: %d\n", n); 
if (n > 0)
{
printf("The random number is positive.\n");
} else if (n < 0)
{
printf("The random number is negative.\n");
} else     
{
printf("The random number is zero.\n");
}
return (0);
}
