#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int hasDuplicate(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                return 1;   // Duplicate found
        }
    }
    return 0;   // No duplicate
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    srand(time(NULL));

    printf("\nGenerated Numbers:\n");

    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;   // Random numbers between 0 and 99
        printf("%d ", arr[i]);
    }

    printf("\n");

    if(hasDuplicate(arr, n))
        printf("\nDuplicate elements are present.\n");
    else
        printf("\nAll elements are unique.\n");

    return 0;
}