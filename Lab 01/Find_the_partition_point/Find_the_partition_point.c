#include <stdio.h>

int findPartition(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == 1)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements (0s followed by 1s):\n");

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int partition = findPartition(arr,n);

    if(partition==-1)
        printf("No 1 found.\n");
    else
    {
        printf("\nPartition Point = %d\n",partition);
        printf("Transition occurs between index %d and %d\n",
               partition,partition+1);
    }

    return 0;
}