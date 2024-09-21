#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();

        // Reverse Matrix STL
        reverse(matrix.begin(), matrix.end());

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};