#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int temp[], int left, int mid, int right, long long *swapCount) 
{
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) 
    {
        if (arr[i] <= arr[j]) 
        {
            temp[k++] = arr[i++];
        } 
        else 
        {
            temp[k++] = arr[j++];
            *swapCount += (mid - i + 1);
        }
    }
    while (i <= mid) 
    {
        temp[k++] = arr[i++];
    }
    while (j <= right) 
    {
        temp[k++] = arr[j++];
    }
    for (i = left; i <= right; i++) 
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int temp[], int left, int right, long long *swapCount) 
{
    if (left < right) 
    {
        int mid = (left + right) / 2;
        mergeSort(arr, temp, left, mid, swapCount);
        mergeSort(arr, temp, mid + 1, right, swapCount);
        merge(arr, temp, left, mid, right, swapCount);
    }
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

    int temp[n];
    long long swapCount = 0;
    mergeSort(arr, temp, 0, n - 1, &swapCount);
    printf("%lld\n", swapCount);
}
