#include <stdio.h>
int largest(int arr[], int n)
{
    int s;
    int max = arr[0];  
    for (s = 1; s < n; s++)
        if (arr[s] > max)
            max = arr[s];
 
    return max;
}
 
int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest in given array is %d", largest(arr, n));
    return 0;
}
Run on IDE
