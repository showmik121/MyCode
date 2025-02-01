#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPlaceBalls(vector<int> &position, int m, int minDist)
    {
        int count = 1, lastPos = position[0];

        for (int i = 1; i < position.size(); i++)
        {
            if (position[i] - lastPos >= minDist)
            {
                count++;
                lastPos = position[i];
                if (count == m)
                    return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());
        int left = 1, right = position.back() - position.front(), result = 0;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (canPlaceBalls(position, m, mid))
            {
                result = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> position = {1, 2, 3, 4, 7};
    int m = 3;

    cout << "Maximum Minimum Distance: " << sol.maxDistance(position, m) << endl;
    return 0;
}
