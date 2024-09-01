#include <vector>
#include <algorithm>
#include <climits>

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        // Initialize min_diff with a large value (INT_MAX)
        int min_diff = INT_MAX;
        int n = nums.size();
        int ans = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; ++i)
        {

            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            int j = i + 1;
            int k = n - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = abs(sum - target);
                if (diff < min_diff)
                {
                    min_diff = diff;
                    ans = sum;
                }

                if (sum < target)
                {
                    j++;
                }
                else if (sum > target)
                {
                    k--;
                }
                else
                {
                    return sum;
                }
            }
        }

        return ans;
    }
};
