#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

void solve(vector<int> &arr1, int n1, vector<int> &arr2, int n2)
{
    int index1 = 0;
    int index2 = 0;
    vector<int> arr;            // Changed from fixed size array to dynamic array
    int lastInserted = INT_MIN; // To keep track of last inserted element to avoid duplicates

    while (index1 < n1 && index2 < n2)
    {
        if (arr1[index1] < arr2[index2])
        {
            if (arr1[index1] != lastInserted)
            {
                arr.push_back(arr1[index1]);
                lastInserted = arr1[index1];
            }
            index1++;
        }
        else if (arr1[index1] > arr2[index2])
        {
            if (arr2[index2] != lastInserted)
            {
                arr.push_back(arr2[index2]);
                lastInserted = arr2[index2];
            }
            index2++;
        }
        else
        {
            if (arr1[index1] != lastInserted)
            {
                arr.push_back(arr1[index1]);
                lastInserted = arr1[index1];
            }
            index1++;
            index2++;
        }
    }

    while (index1 < n1)
    {
        if (arr1[index1] != lastInserted)
        {
            arr.push_back(arr1[index1]);
            lastInserted = arr1[index1];
        }
        index1++;
    }

    while (index2 < n2)
    {
        if (arr2[index2] != lastInserted)
        {
            arr.push_back(arr2[index2]);
            lastInserted = arr2[index2];
        }
        index2++;
    }

    print(arr); // Print the merged array
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int n1 = arr1.size();
    vector<int> arr2 = {0, 2, 2, 3};
    int n2 = arr2.size();
    solve(arr1, n1, arr2, n2);
    return 0;
}
