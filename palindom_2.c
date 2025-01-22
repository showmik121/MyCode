#include <stdio.h>
#include <stdbool.h>
bool ispalindom(int arr[], int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (arr[start]!=arr[end])
    {
        return false;
    }
    return ispalindom(arr,start+1,end-1);
    
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

    return 0;
}