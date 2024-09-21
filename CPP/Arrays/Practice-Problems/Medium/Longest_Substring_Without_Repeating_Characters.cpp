#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> m;
        int ans = 0;
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] > 0)
            {
                j = max(m[s[i]], j);
            }
            ans = max(i - j + 1, ans);
            m[s[i]] = i + 1;
        }

        return ans;
    }
};