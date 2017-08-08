#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *a, int start, int end)
{
    int pivot = a[end];
    int pi = start;
    int i;

    for (i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            swap(&a[pi], &a[i]);
            pi++;
        }
    }
    swap(&a[pi], &a[end]);
    return pi;
}

void quicksort(int a[], int start, int end)
{
    if (start < end)
    {
        int pi = partition(a, start, end);
        quicksort(a, start, pi - 1);
        quicksort(a, pi + 1, end);
    }
}

int main()
{
    int a[6] = {6, 3, 4, 1, 2, 5};
    int i;
    int n = 6;

    printf ("Array before sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d ",a[i]);

    quicksort(a, 0, n-1);
  
    printf ("\nArray after sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d ",a[i]);
  
    printf ("\n");
    return 0;
}
