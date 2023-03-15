//Min Time Complexity --> O(N)  (If array is already sorted)
//MAX Time Complexity --> O(N^2)

//Bubble Sort

#include <bits/stdc++.h>
using namespace std;

void swapElement(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int A[], int n)
{
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                swapElement(&A[j], &A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            return;
        }
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

    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    int n = sizeof(A) / sizeof(A[0]);

    bubbleSort(A, n);
    printArray(A, n);

    return 0;
}
