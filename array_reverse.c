#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = n-1; i>=0; i--) /*
    1.need to start from the (n-1) becasuse array index always start from the 0. So the last element is at index (n-1), not n .

    2. Most Important is condition here. Condition (i>=0) means we continune the loop until we reach the first elemnt (index 0).
   */

    {
        printf("The reverse Array Element Get From The Array: %d ", ar[i]);
    }
    

    return 0;
}