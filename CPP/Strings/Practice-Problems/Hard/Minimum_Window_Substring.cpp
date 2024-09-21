#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string minWindow(string s, string t)
    {
        if (s.length() == 0 || t.length() == 0)
        {
            return "";
        }

        unordered_map<char, int> dict;
        unordered_map<char, int> window;

        int cnt = 0;
        for (int i = 0; i < t.size(); i++)
        {
            dict[t[i]]++;
        }

        int required = dict.size();
        int formed = 0;

        int ans[3] = {-1, 0, 0};

        int l = 0, r = 0;
        char c;

        while (r < s.length())
        {
            window[s[r]]++;
            if (dict.find(s[r]) != dict.end() && window[s[r]] == dict[s[r]])
            {
                formed++;
            }

            while (l <= r && formed == required)
            {
                c = s[l];
                if (ans[0] == -1 || r - l + 1 < ans[0])
                {
                    ans[0] = r - l + 1;
                    ans[1] = l;
                    ans[2] = r;
                }
                window[c]--;
                if (dict.find(c) != dict.end() && window[c] < dict[c])
                {
                    formed--;
                }
                l++;
            }
            r++;
        }

        return ans[0] == -1 ? "" : s.substr(ans[1], ans[2] - ans[1] + 1);
    }
};