#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() { 
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
 if (n < 0)
 {	 
 printf("%d is negative\n", n);
 }
else if (n > 0)
{
printf("%d is positive\n");
}
else
{
printf("%d is zero\n", n);
}   
return 0;
}
