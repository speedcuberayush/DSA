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

int main(int argc, char const *argv[])
{

    string s, t;
    s = "abcde";
    t = "abced";
    Solution st;
    cout << st.rotateString(s, t) << endl;
    return 0;
}
