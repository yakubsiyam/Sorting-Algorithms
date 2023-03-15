//Time Complexity --> O(N^2)
//Selection Sort

#include <bits/stdc++.h>
using namespace std;

void swapElement(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int A[], int n)
{
    for(int i = 0; i < n -1; i++)
    {
        int k = i;
        for(int j = i; j < n; j++)
        {
            if(A[j] < A[k])
                k = j;
        }
        swapElement(&A[i], &A[k]);
    }
}

void printArray(int A[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, -2};
    int n = sizeof(A) / sizeof(A[0]);

    selectionSort(A, n);
    printArray(A, n);

    return 0;
}

