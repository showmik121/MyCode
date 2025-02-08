#include<bits/stdc++.h>
using namespace std;

// Include your Solution class here
using ll = long long;
class Solution
{
public:
    // Function to check if we can produce 'mid' alloys within budget
    bool possible(ll mid, int budget, vector<vector<int>> &composition, vector<int> &stock, vector<int> &cost)
    {
        ll minCost = LLONG_MAX;

        // Check cost for each machine
        for (int i = 0; i < composition.size(); i++)
        {
            ll currCost = 0;
            for (int j = 0; j < composition[i].size(); j++)
            {
                ll required = mid * composition[i][j]; // Required metal for mid alloys
                if (required > stock[j])
                {
                    currCost += (required - stock[j]) * cost[j]; // Buying extra metal
                }
            }
            minCost = min(minCost, currCost); // Take the minimum cost across machines
        }
        return minCost <= budget; // Can we make 'mid' alloys within budget?
    }

    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>> &composition, vector<int> &stock, vector<int> &cost)
    {
        ll l = 0, r = 1e9, ans = 0;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (possible(mid, budget, composition, stock, cost))
            {
                ans = mid;   // Store maximum possible alloys found
                l = mid + 1; // Try for a higher value
            }
            else
            {
                r = mid - 1; // Reduce search space
            }
        }
        return ans;
    }
};

int main()
{
    // Sample Input
    int n = 4; // Number of metals
    int k = 9; // Number of machines
    int budget = 55;

    vector<vector<int>> composition = {
        {8, 3, 4, 2}, {3, 9, 5, 5}, {1, 7, 9, 8}, {7, 6, 5, 1}, {4, 6, 9, 4}, {6, 8, 7, 1}, {5, 10, 3, 4}, {10, 1, 2, 4}, {10, 3, 7, 2}};

    vector<int> stock = {9, 1, 10, 0}; // Available metal stock
    vector<int> cost = {3, 4, 9, 9};   // Cost per unit of metal

    Solution obj;
    int result = obj.maxNumberOfAlloys(n, k, budget, composition, stock, cost);

    cout << "Maximum number of alloys: " << result << endl;

    return 0;
}
