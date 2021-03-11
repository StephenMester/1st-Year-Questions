#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10

void mergesort(int [], int , int);
void merge(int [], int , int, int);

int main()
{

    int messyarray [SIZE] = {2,9,4,1,3,5,6,7,2,3};
    int lenght = sizeof(messyarray)/sizeof(int);
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", messyarray[i]);
    }

   
    mergesort(messyarray, 0, lenght - 1);
    printf("\nSorted array\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", messyarray[i]);
    }

    return 0;
}

void mergesort(int arr[], int l, int r)
{
    if (l >= r)
    {   
        return;
    }
    int m = floor((l+r)/2);
    //Left
    mergesort(arr,l,m);
    //Right
    mergesort(arr,m+1,r);

    merge(arr,l,m,r);
}

void merge(int arr[], int l , int m, int r)
{
    int i;
    int j;
    int k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[SIZE];
    int R[SIZE];

    //copy data into arrays
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l+i];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    //Merge temp arrays
    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        //No matter what k get incrememnted
        k++;
    }
    // Copies remaining values for R or L
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

