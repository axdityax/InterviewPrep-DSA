#include <bits/stdc++.h>
using namespace std;

#include <vector>
#include <algorithm>

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();

        // Sort the array to make two-pointer technique possible
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; ++i)
        {
            // Skip duplicate elements to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            int j = i + 1;
            int k = n - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0)
                {
                    j++;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    // Skip duplicate elements
                    while (j < k && nums[j] == nums[j - 1])
                    {
                        j++;
                    }

                    while (j < k && nums[k] == nums[k + 1])
                    {
                        k--;
                    }
                }
            }
        }

        return ans;
    }
};
