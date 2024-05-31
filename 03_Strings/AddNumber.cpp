#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    string sum = "";
    int carry = 0;
    int temp = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    while (i >= 0 && j >= 0)
    {
        temp = a[i--] - '0' + b[j--] - '0' + carry;
        sum.push_back((temp % 10) + '0');
        temp = temp / 10;
        carry = temp;
    }
    while (i >= 0)
    {
        temp = a[i--] - '0' + carry;
        sum.push_back((temp % 10) + '0');
        temp = temp / 10;
        carry = temp;
    }
    if (carry != 0)
        sum.push_back(carry + '0');
    cout << "a: " << a << endl
         << "b: " << b << endl;
    reverse(sum.begin(), sum.end());
    cout << sum << endl;
    return 0;
}