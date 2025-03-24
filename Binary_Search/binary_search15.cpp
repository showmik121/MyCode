#include <iostream>
using namespace std;

class Solution
{
public:
    long long root(int mid, int n, int m)
    {
        long long res = 1;
        for (int i = 0; i < n; i++)
        {
            res *= mid;
            if (res > m)
                return m + 1; // Prevent overflow
        }
        return res;
    }

    int nthRoot(int n, int m)
    {
        int l = 1, r = m;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            long long midPower = root(mid, n, m);

            if (midPower == m)
            {
                return mid; // Found the exact nth root
            }
            else if (midPower > m)
            {
                r = mid - 1; // Reduce the search space
            }
            else
            {
                l = mid + 1; // Increase the search space
            }
        }
        return -1; // No integer nth root found
    }
};

int main()
{
    Solution sol;
    int n, m;

    cout << "Enter the value of n (root power): ";
    cin >> n;
    cout << "Enter the value of m (number): ";
    cin >> m;

    int result = sol.nthRoot(n, m);

    if (result == -1)
    {
        cout << "No integer " << n << "th root found for " << m << endl;
    }
    else
    {
        cout << "The " << n << "th root of " << m << " is: " << result << endl;
    }

    return 0;
}
