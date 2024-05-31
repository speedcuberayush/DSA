#include <bits/stdc++.h>
using namespace std;
bool solve(string a)
{
    set<char> st;
    int i = 0;
    while (i < a.size())
        st.insert(a[i++]);
    return st.size() == 26;
}
int main()
{
    string a;
    getline(cin, a);

    cout << ((solve(a)) ? "YES" : "NO");
    return 0;
}
