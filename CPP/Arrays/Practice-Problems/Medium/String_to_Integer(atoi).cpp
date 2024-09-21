#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int index = 0, sign = 1, result = 0;
        int n = s.size();

        // Skip leading whitespaces
        while (index < n && s[index] == ' ')
        {
            index++;
        }

        // Check for sign
        if (index < n && (s[index] == '-' || s[index] == '+'))
        {
            sign = (s[index] == '-') ? -1 : 1;
            index++;
        }

        // Convert the number
        while (index < n && isdigit(s[index]))
        {
            int digit = s[index] - '0';

            // Check for overflow and underflow
            if (result > (INT_MAX - digit) / 10)
            {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            index++;
        }

        return result * sign;
    }
};
