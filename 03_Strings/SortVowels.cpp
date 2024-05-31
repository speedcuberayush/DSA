#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cout << "Enter a string : ";
    cin >> a;

    cout << "Unsorted: " << a << endl;
    string store = "";
    int i = 0;
    while (i < a.size())
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            store += a[i];
            a[i] = '$';
        }
        i++;
    }

    sort(store.begin(), store.end());
    i = 0;
    int j = 0;
    while (i < a.size() && j < store.size())
    {
        if (a[i] == '$')
            a[i] = store[j++];
        i++;
    }
    cout << "Sorted: " << a << endl;

    return 0;
}