#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandom(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        arr[i] = rand() % 10000;
}

void copyArray(int src[], int dest[], int n)
{
    for(int i = 0; i < n; i++)
        dest[i] = src[i];
}

// Version 1: Stops if already sorted
long long bubbleSortOptimized(int arr[], int n)
{
    long long comparisons = 0;
    int swapped;

    for(int i = 0; i < n - 1; i++)
    {
        swapped = 0;

        for(int j = 0; j < n - i - 1; j++)
        {
            comparisons++;

            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if(!swapped)
            break;
    }

    return comparisons;
}

// Version 2: Always performs n-1 passes
long long bubbleSortNormal(int arr[], int n)
{
    long long comparisons = 0;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            comparisons++;

            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return comparisons;
}

int main()
{
    srand(time(NULL));

    printf("Size\tOptimized\tNormal\n");

    for(int n = 100; n <= 1000; n += 100)
    {
        int arr1[n], arr2[n], temp[n];

        generateRandom(temp, n);

        copyArray(temp, arr1, n);
        copyArray(temp, arr2, n);

        long long c1 = bubbleSortOptimized(arr1, n);
        long long c2 = bubbleSortNormal(arr2, n);

        printf("%d\t%lld\t\t%lld\n", n, c1, c2);
    }

    return 0;
}