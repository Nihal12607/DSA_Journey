// Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cout << "Enter The Number of Array Elements : ";
    cin >> N;

    if (N <= 0)
    {
        cout << " Array Is Empty";
        return 0;
    }

    vector<int> a(N);
    cout << "Enter The Array :\n";
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int k = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] != 0)
        {
            if (k != i)
                swap(a[i], a[k]);
            k++;
        }
    }

    cout << "The Modified Array is : ";
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}
/*
Time Complexity : O(N)

Space Complexity : O(1)

Where N is the number of array elements.
*/