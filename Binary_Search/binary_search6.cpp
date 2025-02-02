#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//binary search on the answer
class Solution
{
public:
    bool isbloom(vector<int> &bloomDay, int m, int k, int mid)
    {
        int count = 0, kcount = 0;
        for (int i = 0; i < bloomDay.size(); i++)
        {
            if (bloomDay[i] <= mid)
            {
                kcount++;
            }
            else
            {
                kcount = 0; // Reset counter
            }
            if (kcount == k)
            {
                count++;
                kcount = 0; // Reset after making a bouquet
            }
            if (count == m)
            {
                return true;
            }
        }
        return false;
    }

    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int n = bloomDay.size();
        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int r = *max_element(bloomDay.begin(), bloomDay.end());

        int result = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isbloom(bloomDay, m, k, mid))
            {
                result = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3, k = 1;
    cout << "Minimum days: " << sol.minDays(bloomDay, m, k) << endl;
    return 0;
}
