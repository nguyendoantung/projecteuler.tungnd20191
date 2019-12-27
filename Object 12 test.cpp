#include <stdio.h>
#include <math.h>

int DemUoc(long n)
{
    double canF = sqrt (n);
    int canI = (int) canF;
    int count = canI == canF ? -1 : 0;
    long i;
    for (i = 1; i <= canI; i ++)
        if (0 == n % i) count += 2;
    return count;
}

int main ()
{
    long triangle = 1;
    int index = 1;
    while (DemUoc(triangle) < 500)
    {
        triangle = index*(index+1)/2;
        index++;
    }
    printf ("%ld\n", triangle);
}
