#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool rotateString(string s, string t)
    {
        if (s.size() != t.size())
            return 0;

        s += s;
        return s.find(t);

        return true;
    }
};