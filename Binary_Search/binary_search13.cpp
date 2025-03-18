#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
        {
            return 0;
        }
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            // if mid at first
            if (mid == 0 && nums[mid] > nums[mid + 1])
            {
                return mid;
            }
            // if mid at last
            if (mid == n - 1 && nums[mid] > nums[mid - 1])
            {
                return mid;
            }
            // general case
            if (mid > 0 && mid < n - 1 && nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            {
                return mid;
            }
            if (mid < n - 1 && nums[mid] < nums[mid + 1])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return 0;
    }
};

// Main function
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution obj;
    int peakIndex = obj.findPeakElement(nums);

    cout << "Peak element found at index: " << peakIndex << endl;

    return 0;
}
