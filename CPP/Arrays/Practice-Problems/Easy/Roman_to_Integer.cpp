#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(std::string s)
    {
        std::map<std::string, int> roman_map = {
            {"M", 1000},
            {"CM", 900},
            {"D", 500},
            {"CD", 400},
            {"C", 100},
            {"XC", 90},
            {"L", 50},
            {"XL", 40},
            {"X", 10},
            {"IX", 9},
            {"V", 5},
            {"IV", 4},
            {"I", 1}};

        int ans = 0;
        for (size_t i = 0; i < s.size();)
        {
            if (i + 1 < s.size() && roman_map.find(s.substr(i, 2)) != roman_map.end())
            {
                ans += roman_map[s.substr(i, 2)];
                i += 2;
            }
            else
            {
                ans += roman_map[s.substr(i, 1)];
                i += 1;
            }
        }

        return ans;
    }
};