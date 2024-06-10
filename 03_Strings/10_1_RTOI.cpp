#include <bits/stdc++.h>
using namespace std;

int value(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}

int solve(string roman)
{
    int res = 0;
    for (int i = 0; i < roman.size(); i++)
        if ((value(roman[i]) < value(roman[i + 1])))
            res -= value(roman[i]);
        else
            res += value(roman[i]);
    return res;
}
int main()
{
    string roman = "LVIII";
    cout << "ROMAN : " << roman << endl
         << "INTEGER : " << solve(roman) << endl;

    return 0;
}