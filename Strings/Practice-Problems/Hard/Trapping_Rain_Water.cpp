class Solution
{
public:
	int trap(vector<int> &height)
	{
		int n = height.size();

		vector<int> leftMax(n), rightMax(n);
		// Calculating the leftMax buildings for every given building
		// 0th index wali ke leftMei mitti hai
		leftMax[0] = 0;
		int leftKiSabseBadiBuilding = height[0];

		for (int i = 1; i < n; ++i)
		{
			leftMax[i] = leftKiSabseBadiBuilding;
			leftKiSabseBadiBuilding = max(leftKiSabseBadiBuilding, height[i]);
		}

		rightMax[n - 1] = 0;
		int rightKiSabseBadiBuilding = height[n - 1];
		for (int i = n - 2; i >= 0; --i)
		{
			rightMax[i] = rightKiSabseBadiBuilding;
			rightKiSabseBadiBuilding = max(rightKiSabseBadiBuilding, height[i]);
		}

		int ans = 0;

		for (int i = 0; i < n; ++i)
		{
			int kitnaPaaniRuka = min(leftMax[i], rightMax[i]) - height[i];
			if (kitnaPaaniRuka > 0)
			{
				ans += kitnaPaaniRuka;
			}
		}

		return ans;
	}
};