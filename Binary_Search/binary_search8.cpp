#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSquareStreak(vector<int> &nums)
    {
        set<long long> st(nums.begin(), nums.end());
        int max_streak = 0;                          // Track the longest streak

        for (auto ele : st)
        {
            int count = 1;
            long long x = 1LL * ele * ele;

            while (st.find(x) != st.end())
            {
                count++;
                x = 1LL * x * x;
            }

            max_streak = max(max_streak, count);
        }

        return (max_streak > 1) ? max_streak : -1; // If no valid streak, return -1
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 9, 16, 5, 256};
    cout << "Longest Square Streak: " << sol.longestSquareStreak(nums) << endl;
    return 0;
}
