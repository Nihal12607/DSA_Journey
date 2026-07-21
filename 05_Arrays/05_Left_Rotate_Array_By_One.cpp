// Problem Statement: Given an integer array nums, rotate the array to the left by one.

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

    int dummy = a[0];
    for (int i = 1; i < N; i++)
    {
        a[i - 1] = a[i];
    }
    a[N - 1] = dummy;

    cout << "The Rotated Array Is : ";
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