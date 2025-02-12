#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxJump(vector<int> &stones)
    {
        int n = stones.size();
        int maxi = stones[1] - stones[0]; // First jump

        // Checking alternate jumps
        for (int i = 2; i < n; i++)
        {
            maxi = max(maxi, stones[i] - stones[i - 2]);
        }
        return maxi;
    }
};

// Main function to test the solution
int main()
{
    Solution sol; // Create an instance of Solution

    vector<int> stones = {1, 3, 5, 6, 8, 10}; // Example test case

    int result = sol.maxJump(stones); // Call the function

    cout << "Minimum cost of the path: " << result << endl; // Output result

    return 0;
}
