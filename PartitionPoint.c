#include <stdio.h>

int findTransition(int arr[], int n)
{
    int low = 0, high = n - 1;
    int transition = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == 1)
        {
            transition = mid;
            high = mid - 1;   // Search on left side
        }
        else
        {
            low = mid + 1;    // Search on right side
        }
    }

    return transition;
}

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements (0's followed by 1's):\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int index = findTransition(arr, n);

    if(index == -1)
        printf("No transition point (array contains only 0's).\n");
    else
        printf("Transition point is at index %d\n", index);

    return 0;
}