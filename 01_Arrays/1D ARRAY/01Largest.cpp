#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> arr)
{
    int max = INT_MIN;
    for (auto i : arr)
        if (i > max)
            max = i;
    return max;
}
int main()
{
    vector<int> arr = {9, 7, 2, 4, 1, 19};
    cout << "Largest is " << solve(arr);
    return 0;
}

// 1. linear search
// 2. sort and last element