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
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ages[i];
    }

    float avg =  sum / n;
    printf("The average age is : %.2f", avg);
    

    return 0;
}