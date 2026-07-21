// Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter The Number of Elements: ";
    int n;
    cin >> n;

    set<int> a;

    cout << "Enter The Array:\n";
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.insert(t);
    }
    if (a.size() < 2)
    {
        cout << "-1";
        return 0;
    }
    auto it = a.begin();
    advance(it, 1);
    cout << "The Second Smallest Element is : " << *(it) << "\n";

    it = a.end();
    advance(it, -2);
    cout << "The Second Largest Element is : " << *(it);
}
/*
Time Complexity : O(N x log(N))
Space Complexity : O(N)

Where N is Number of Elements in the array.
*/