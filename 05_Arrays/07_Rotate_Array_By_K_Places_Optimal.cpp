// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

#include <bits/stdc++.h>
using namespace std;

void reversal(vector<int> &a, int low, int high)
{
    while (low < high)
    {
        swap(a[low], a[high]);
        low++;
        high--;
    }
}

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

    k = k % N;

    cout << "Enter left or right : \n";
    string direction;
    cin >> direction;

    if (direction == "left")
    {
        reversal(a, 0, k - 1);
        reversal(a, k, N - 1);
        reversal(a, 0, N - 1);
    }
    else if (direction == "right")
    {
        reversal(a, 0, N - 1);
        reversal(a, 0, k - 1);
        reversal(a, k, N - 1);
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
Time Complexity : O(N)


Space Complexity : O(1)

Where N is the number of array elements.
*/