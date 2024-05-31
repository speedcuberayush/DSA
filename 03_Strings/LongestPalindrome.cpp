#include <bits/stdc++.h>
using namespace std;
int solve(string a)
{
    int ans = 0;
    vector<int> arr(26, 0);
    int i = 0;

    while (i < a.size())
        arr[a[i++] - 'a']++;
    bool odd = 0;
    for (auto i : arr)
    {
        if (i & 1)
        {
            odd = 1;
            if (i > 1)
                ans += (i - 1);
        }
        else
            ans += i;
    }

    return (odd) ? ans + 1 : ans;
}
int main()
{
    string a;
    cout << "Enter a string: ";
    cin >> a;
    int longest = solve(a);

    cout << "Longest Palindrome: " << longest << endl;
    return 0;
}