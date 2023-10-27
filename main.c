#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    float avg = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int R = n;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d integers: ", R);
        R--;
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("\nAverage: %.2f", avg);

    return 0;
}