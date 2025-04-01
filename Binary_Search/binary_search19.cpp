#include <bits/stdc++.h>
using namespace std;
// maximize of (minimun value)
class Solution
{
public:
    // Greedy function to check if we can select k elements with at least 'mid' difference
    bool possible(vector<int> &price, int k, int mid)
    {
        int count = 1;       // Always pick first element
        int last = price[0]; // First element is chosen

        for (int i = 1; i < price.size(); i++)
        {
            if (price[i] - last >= mid) // Check if we can pick this element
            {
                count++;
                last = price[i]; // Update last chosen element
                if (count >= k)  // If we already picked k elements, return true
                    return true;
            }
        }
        return false; // Not possible to pick k elements with this 'mid'
    }

    int maximumDistance(vector<int> &price, int k)
    {
        sort(price.begin(), price.end()); // Step 1: Sort the array

        int low = 1;
        int high = price.back() - price.front(); // Step 2: Define search space
        int ans = 0;

        while (low <= high) // Step 3: Binary Search
        {
            int mid = low + (high - low) / 2;
            if (possible(price, k, mid))
            {
                ans = mid;     // Store valid answer
                low = mid + 1; // Try to maximize the answer
            }
            else
            {
                high = mid - 1; // Reduce the search space
            }
        }
        return ans; // Step 4: Return the best possible answer
    }
};

int main()
{
    Solution obj;
    vector<int> price = {1, 2, 5, 8, 13, 21};
    int k = 3;
    cout << "Maximum Minimum Distance: " << obj.maximumDistance(price, k) << endl;
    return 0;
}
