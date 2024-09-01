#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> num_map;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            int check = target - nums[i];
            if (num_map.find(check) != num_map.end())
            {
                ans.push_back(num_map[check]);
                ans.push_back(i);
                return ans;
            }
            num_map[nums[i]] = i;
        }

        return ans;
    }
};
