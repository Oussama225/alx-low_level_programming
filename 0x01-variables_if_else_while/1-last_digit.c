#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *   Entry point of the program.
 *     Generates a random number, calculates its last digit,
 *       and prints information about the last digit.
 *        */
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, m);
else if (m == 0)
printf("Last digit of %i is %i and is 0\n", n, m);
else
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
return 0;
}
