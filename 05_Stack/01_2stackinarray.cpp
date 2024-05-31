#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr = new int[10];
    int top1 = -1;
    int top2 = 10;
    void push1(int ele)
    {
        if (top1 + 1 == top2)
        {
            cout << "Overflow condition" << endl;
            return;
        }
        arr[++top1] = ele;
    }

    void push2(int ele)
    {
        if (top1 == top2 - 1)
        {
            cout << "Overflow condition" << endl;
            return;
        }
        arr[--top2] = ele;
    }

    void display1()
    {
        if (top1 == -1)
        {
            cout << "EMPTY stack" << endl;
            return;
        }
        cout << "STACK 1: ";
        for (int i = 0; i <= top1; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void display2()
    {
        if (top2 == 10)
        {
            cout << "EMPTY stack" << endl;
            return;
        }
        cout << "STACK 2: ";
        for (int i = 9; i >= top2; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
    void pop1()
    {
        if (top1 == -1)
            cout << "UNDERFLOW" << endl;
        else
            --top1;
    }

    void pop2()
    {
        if (top2 == 10)
            cout << "UNDERFLOW" << endl;
        else
            ++top2;
    }
};

int main()
{
    Stack s;
    for (int i = 0; i < 5; i++)
    {
        s.push1(2 * i + 1);
        s.display1();
        s.push2(2 * i + 2);
        s.display2();
    }

    s.push1(0);
    s.push2(0);
    for (int i = 0; i < 5; i++)
    {
        s.pop1();
        s.pop2();
        s.display1();
        s.display2();
    }
    s.pop1();
    s.pop2();

    return 0;
}