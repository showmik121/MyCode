#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// minimize the (maximum value)
class Solution
{
public:
    bool possible(vector<int> &nums, int p, int mid)
    {
        int count = 0;
        for (int i = 1; i < nums.size();)
        {
            if (nums[i] - nums[i - 1] <= mid)
            {
                count++;
                i += 2;
            }
            else
            {
                i += 1;
            }
        }
        return count >= p;
    }

    int miniMax(vector<int> &nums, int p)
    {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.back() - nums.front();
        int ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (possible(nums, p, mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 3, 6, 19, 20}; // Example input
    int p = 2;

    int result = sol.miniMax(nums, p);

    cout << "Minimum Maximum Difference: " << result << endl;

    return 0;
}
