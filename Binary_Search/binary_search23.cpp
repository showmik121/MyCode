#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool possible(vector<int> &nums, int mid, int k)
    {
        int sum = 0;
        int count = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > mid)
                return false;

            if (sum + nums[i] <= mid)
            {
                sum += nums[i];
            }
            else
            {
                count++;
                sum = nums[i];
            }
        }
        return count <= k;
    }

    int splitArray(vector<int> &nums, int k)
    {
        int l = *max_element(nums.begin(), nums.end());
        int r = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (possible(nums, mid, k))
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
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int k;
    cout << "Enter number of partitions (k): ";
    cin >> k;

    Solution sol;
    int result = sol.splitArray(nums, k);

    cout << "Minimum largest subarray sum after split: " << result << endl;

    return 0;
}
