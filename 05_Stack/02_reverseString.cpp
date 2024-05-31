#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    while (1)
    {

        cout << "Enter a string: ";
        cin >> a;
        // getline(cin, a);

        cout << "ORIGIAL STRING: " << a << endl;
        stack<char> stk;
        for (auto i : a)
            stk.push(i);

        a = "";
        while (!stk.empty())
        {
            a += stk.top();
            stk.pop();
        }

        cout << "REVERSED STRING: " << a << endl;
    }
    return 0;
}