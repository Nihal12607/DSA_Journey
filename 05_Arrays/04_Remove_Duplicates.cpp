/* Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

 If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It doesn't matter what you leave beyond the first k elements.
*/

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

    int unique = a[0], m = 1, k = 1;

    for (int i = 1; i < N; i++)
    {
        if (a[i] != unique)
        {
            unique = a[i];
            a[m] = a[i];
            k++;
            m++;
        }
    }

    cout << "The Sorted Array Without Any Duplicates is : ";
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
}
/*
Time Complexity : O(N)

Space Complexity : O(1)

Where N is The Number of the array elements.
*/