#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> arr)
{
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for (auto i : arr)
    {
        if (i > largest)
        {
            slargest = largest;
            largest = i;
        }
        if (i < largest && i > slargest)
            slargest = i;
    }
    return slargest;
}
int main()
{
    vector<int> arr = {1, 2, 2, 2, 4, 5, 6, 6, 6, 6, 6, 6, 6};
    cout << "second argest is " << solve(arr);
    return 0;
}

// 1. linear search
// 2. sort and second last element