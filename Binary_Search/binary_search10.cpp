#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target)
            {
                return true;
            }
            if (nums[l] == nums[mid] && nums[mid] == nums[r])
            {
                l = l + 1;
                r = r - 1;
                continue;
            }

            if (nums[l] <= nums[mid]) // left part is sorted
            {
                if (nums[l] <= target && target <= nums[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else // right part is sorted
            {
                if (nums[mid] <= target && target <= nums[r])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
        }
        return false;
    }
};

// Main function to test the search function
int main()
{
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; // Rotated sorted array
    int target;

    cout << "Enter the target element: ";
    cin >> target;

    if (sol.search(nums, target))
    {
        cout << "Element found!" << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }

    return 0;
}
