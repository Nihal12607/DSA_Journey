// Problem Statement: Given an array, we have to find the largest element in the array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter The Number of Elements: ";
    int n;
    cin >> n;

    vector<int> a(n);

    cout << "Enter The Array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int largest = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= largest)
        {
            largest = a[i];
        }
    }

    cout << "The Largest Element is : " << largest;
}

/*
Time Complexity : O(N)
Space Complexity : O(1)

Where N is Number of array elements.
*/