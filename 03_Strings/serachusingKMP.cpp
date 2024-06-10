#include <bits/stdc++.h>
using namespace std;
void solve(string s, vector<int> &LC)
{
    int i = 0;
    int j = 1;
    while (j < LC.size())
    {
        if (s[i] == s[j])
            LC[j++] = ++i;
        else
        {
            if (i == 0)
                LC[j++] = 0;
            else
                i = LC[i - 1];
        }
    }
}
bool search(string a, string b)
{
    vector<int> LC(b.size(), 0);
    solve(b, LC);
    int j = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[j])
            j++;

        else
        {
            if (i == 0)
                i = LC[i - 1];
        }
    }
}
int main()
{
    string a = "oniononionsonion";
    string b = "onions";
    return 0;
}