#include <bits/stdc++.h>
using namespace std;
void reverse(string &str)
{
    int i = 0;
    int j = str.size() - 1;
    while (i < j)
        swap(str[i++], str[j--]);
}
int main()
{
    string str;
    cin >> str;
    cout << "Original: " << str << endl;
    reverse(str);
    cout << "Reversed: " << str << endl;
    return 0;
}