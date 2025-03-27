#include <bits/stdc++.h>
using namespace std;
// koko eating banana
class Solution
{
public:
    int possible(vector<int> &piles, int mid)
    {
        int sum = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            sum += ceil((double)piles[i] / mid); // Properly using ceil
        }
        return sum;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int l = 1, r = *max_element(piles.begin(), piles.end()); // Corrected range
        int ans = r;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (possible(piles, mid) <= h)
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
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    Solution sol;
    cout << sol.minEatingSpeed(piles, h) << endl;
    return 0;
}
