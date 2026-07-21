// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

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

    cout << "Enter K : ";
    int k;
    cin >> k;

    k = k%N;

    cout << "Enter left or right : \n";
    string direction;
    cin >> direction;

    if (direction == "left")
    {
        while (k > 0)
        {
            int dummy = a[0];
            for (int i = 1; i < N; i++)
            {
                a[i - 1] = a[i];
            }
            a[N - 1] = dummy;
            k--;
        }
    }
    else if (direction == "right")
    {
        while (k > 0)
        {
            int dummy = a[N - 1];
            for (int i = N - 1; i > 0; i--)
            {
                a[i] = a[i - 1];
            }
            a[0] = dummy;
            k--;
        }
    }
    else
    {
        cout << "Invalid Direction";
        return 0;
    }

    cout << "The Rotated Array Is : ";
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}
/*
Time Complexity : O(N^2) (Worst Case)
                : O(N x K) (Average case)


Space Complexity : O(1)

Where N is the number of array elements and k is the number of rotations.
*/