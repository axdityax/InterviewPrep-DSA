#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();

        int l = 0;
        int r = n - 1;
        int maxArea = 0, area = 0;
        while (l < r)
        {
            area = min(height[l], height[r]) * (r - l);
            maxArea = max(maxArea, area);

            if (height[r] < height[l])
            {
                r--;
            }
            else
            {
                l++;
            }
        }

        return maxArea;
    }
};