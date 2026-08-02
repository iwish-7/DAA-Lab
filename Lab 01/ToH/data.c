#include <stdio.h>

long long moves = 0;

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move Disk 1 from %c to %c\n", source, destination);
        moves++;
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);

    printf("Move Disk %d from %c to %c\n", n, source, destination);
    moves++;

    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of disks must be greater than 0.\n");
        return 0;
    }

    printf("\nSequence of Moves:\n\n");

    towerOfHanoi(n, 'A', 'B', 'C');

    printf("\n----------------------------------\n");
    printf("Total Moves Required = %lld\n", moves);
    printf("----------------------------------\n");

    return 0;
}