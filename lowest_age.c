#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int ages[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ages[i]);

    }
    int lowestAge = ages[0];
    for (int i = 0; i < n; i++)
    {
       if (lowestAge > ages[i])
       {
        lowestAge = ages[i];
       }
       
    }

    printf("The lowest age in the array is :%d", lowestAge);
    

    return 0;
}