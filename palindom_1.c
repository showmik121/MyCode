#include <stdio.h>
#include <stdbool.h>
bool ispalindom(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (ispalindom(arr, n))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    

    return 0;
}