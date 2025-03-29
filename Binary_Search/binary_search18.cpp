#include <iostream>
using namespace std;
//arrange coin
// binary search on ans
class Solution
{
public:
    bool possible(int n, int mid)
    {
        // Use long long for sum to avoid integer overflow
        long long sum = (long long)mid * (mid + 1) / 2;
        return sum <= n; // Return true if we can arrange 'mid' rows with the coins
    }

    int arrangeCoins(int n)
    {
        int l = 1;
        int r = n;
        int ans = 0; // Initialize ans to 0

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (possible(n, mid))
            {
                ans = mid;   // If it's possible, update the answer
                l = mid + 1; // Try for a larger number of rows
            }
            else
            {
                r = mid - 1; // Try for a smaller number of rows
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter the number of coins: ";
    cin >> n;

    int result = sol.arrangeCoins(n);

    cout << "The maximum number of complete rows that can be formed: " << result << endl;

    return 0;
}
