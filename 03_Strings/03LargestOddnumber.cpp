#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int index = num.size() - 1;
        while (index >= 0) {
            if ((num[index] - '0')&1) 
                return num.substr(0, index + 1);
            index--;
        }
        return "";
} };