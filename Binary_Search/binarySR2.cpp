#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binary(vector<int> &v, int target)
    {
        int l = 0;
        int r = v.size() - 1;

        while (l <= r)
        { int mid = (l + r) / 2; // To prevent overflow if (v[mid] == target)
            {
                return mid;
            }

            // Check if left part is sorted
            if (v[l] <= v[mid])
            {
                // Target lies in the sorted left part
                if (v[l] <= target && target <= v[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            // Right part is sorted
            else
            {
                // Target lies in the sorted right part
                if (v[mid] <= target && target <= v[r])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
        }
        return -1; // Target not found
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;

    int result = sol.binary(v, target);
    if (result != -1)
    {
        cout << "Target found at index: " << result << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }

    return 0;
}
