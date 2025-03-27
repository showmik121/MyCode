#include <iostream>
#include <vector>
#include <numeric> 
#include <cmath>   
#include<bits/stdc++.h>
using namespace std;
// find the smallest divisor
class Solution
{
public:
    long long divisor(vector<int> &nums, int mid)
    {
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += ceil((double)nums[i] / mid);
        }
        return sum;
    }

    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int l = 1;
        int r = *max_element(nums.begin(), nums.end()); // ✅ Binary search should go up to max(nums)
        int ans = r;                                    // ✅ Store valid divisor

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (divisor(nums, mid) <= threshold)
            {
                ans = mid;   // ✅ Store best answer
                r = mid - 1; // ✅ Try to find smaller divisor
            }
            else
            {
                l = mid + 1;
            }
        }
        return ans; // ✅ Return smallest valid divisor
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    cout << "Smallest Divisor: " << sol.smallestDivisor(nums, threshold) << endl;
    return 0;
}
