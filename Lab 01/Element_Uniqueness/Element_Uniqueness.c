#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int printed[n];   // Keeps track of values already printed

    for(i = 0; i < n; i++)
        printed[i] = 0;

    srand(time(NULL));

    printf("\nGenerated Array:\n");
    for(i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }

    printf("\n\nDuplicate Elements:\n");

    int found = 0;

    for(i = 0; i < n; i++)
    {
        if(printed[i])
            continue;

        int count = 1;

        // Count occurrences
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printed[j] = 1;
                count++;
            }
        }

        if(count > 1)
        {
            found = 1;
            printf("%d found at indices: %d", arr[i], i);

            for(j = i + 1; j < n; j++)
            {
                if(arr[i] == arr[j])
                    printf(", %d", j);
            }

            printf("\n");
        }
    }

    if(!found)
        printf("No duplicates found.\n");

    return 0;
}