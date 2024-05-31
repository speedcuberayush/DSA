#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << "Originial: " << str << endl;

    int i = 0;
    vector<string> arr(9, "$");
    string temp = "";
    while (i < str.size())
    {
        if (str[i] == ' ')
        {
            int place = temp[temp.size() - 1] - '0';
            temp.pop_back();
            arr[place] = temp;
            temp.erase();
        }
        else
            temp += str[i];
        i++;
    }

    int place = temp[temp.size() - 1] - '0';
    temp.pop_back();
    arr[place] = temp;
    temp.erase();
    str = "";

    for (auto i : arr)
        if (i != "$")
            str += (i + ' ');

    cout << "Sorted: " << str << endl;
    return 0;
}