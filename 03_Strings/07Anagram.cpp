#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        vector<int> arr(26, 0);
        for (auto i : s)
            arr[i - 'a']++;
        for (auto i : t)
            arr[i - 'a']--;
        for (auto i : arr)
            if (i != 0)
                return false;
        return true;
    }
};
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         return s==t;
//     }
// };