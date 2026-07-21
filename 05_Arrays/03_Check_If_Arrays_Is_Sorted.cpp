// Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

#include <bits/stdc++.h>
using namespace std;

bool is_Sorted(vector<int> &a, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter The Number of Elements : ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter The Array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (is_Sorted(a, n))
    {
        cout << "The Array is Sorted";
    }
    else
    {
        cout << "The Array is not Sorted";
    }
}
/*
Time Complexity : O(N)

Space Complexity : O(1)

Where N is the Number of elements of the array.
*/