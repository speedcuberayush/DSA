#include <bits/stdc++.h>
using namespace std;
int KMP(string str)
{
    vector<int> LC(str.size(), 0);
    int i = 0, j = 1;
    while (j < str.size())
    {
        if (str[i] == str[j])
            LC[j++] = ++i;
        else
        {
            if (i == 0)
                LC[j++] = 0;
            else
                i = LC[i - 1];
        }
    }
    return LC[str.size() - 1];
}
int main()
{
    string str;
    cin >> str;
    cout << "LONGEST COMMON PREFIX SUFFIX SIZE: " << KMP(str) << endl;
    return 0;
}