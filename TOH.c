#include <stdio.h>

long long moves = 0;

// Recursive function for Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        moves++;
        return;
    }

    towerOfHanoi(n - 1, source, auxiliary, destination);

    printf("Move disk %d from %c to %c\n", n, source, destination);
    moves++;

    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');

    printf("\nTotal Moves = %lld\n", moves);

    return 0;
}