#include <bits/stdc++.h>
using namespace std;

// void deleteMiddle(stack<int> &stk, int N)
// {
//     // Write your code here
//     vector<int> arr;
//     for (int i = 0; i < N / 2; i++)
//     {
//         arr.push_back(stk.top());
//         stk.pop();
//     }
//     stk.pop(); // Pop the middle element

//     for (int i = arr.size() - 1; i >= 0; i--)
//     {
//         stk.push(arr[i]);
//     }
// }

char check(char i)
{
    if (i == '(')
        return ')';
    if (i == '[')
        return ']';
    if (i == '{')
        return '}';
}
bool isValidParenthesis(string s)
{
    // Write your code here.
    unordered_map<char, char> mpp = {
        {'(', ')'},
        {'[', ']'},
        {'{', '}'},
    };
    stack<char> stk;
    for (char i : s)
    {
        if (i == '(' || i == '[' || i == '{')
            stk.push(i);
        else if (i == ')' || i == ']' || i == '}')
        {
            if (stk.top() != check(i))
                return 0;
            else
                stk.pop();
        }
    }
    return stk.empty();
}