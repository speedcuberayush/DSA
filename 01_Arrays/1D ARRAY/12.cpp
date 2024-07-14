#include <bits/stdc++.h>
using namespace std;

void print(const vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

// approach 1
int solve(vector<int> arr)
{
    int ans = 0;
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int n = *max_element(arr.begin(), arr.end());
    return (n * (n + 1) / 2) - sum;
}
// approach 2
// int solve(vector<int> arr)
// {
//     sort(arr.begin(), arr.end());
//     if (arr[0] != 1)
//         return 1;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] + 1 != arr[i + 1])
//             return arr[i] + 1;
//     }
//     return -1;
// }

int main()
{
    vector<int> arr = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = arr.size();
    cout << "ORIGINIAL: ";
    print(arr);
    cout << solve(arr);

    return 0;
}
