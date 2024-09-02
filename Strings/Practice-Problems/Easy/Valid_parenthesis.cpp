#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        unordered_map<char, char> m;
        m[')'] = '(';
        m['}'] = '{';
        m[']'] = '[';
        stack<char> stk;
        for (char c : s)
        {
            if (m.find(c) != m.end())
            { // closing bracket
                // get the top element of the stack, if stack is empty, set a
                // dummy value '#'
                char topElement = stk.empty() ? '#' : stk.top();
                stk.pop();
                // if the mapping for this bracket doesn't match the stack's top
                // element, return false.
                if (topElement != m[c])
                {
                    return false;
                }
            }
            else
            {
                stk.push(c);
            }
        }
        return stk.empty();
    }
};