#include <stdio.h>
int main ()
{
    int ar [4];
    int i;
    printf("Enter array element\n");
    for ( i = 0; i < 4; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i= 0; i < 4; i++)
    {
        printf("%d\n", ar[i]);
    }
    
 return 0;
}