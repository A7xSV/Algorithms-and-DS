#include <stdio.h>

void merge(int *a, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1];
    int R[n2];
    int i, j, k;

    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }

    while (i < n1)
        a[k++] = L[i++];
    while (j < n2)
        a[k++] = R[j++];
}

void mergeSort(int *a, int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main()
{
    int a[6] = {6, 3, 4, 2, 5, 1};
    int n = 6, i;

    printf("Array before sorting : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    mergeSort(a, 0, n - 1);

    printf("\nArray after sorting : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
