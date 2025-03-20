//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// User function template for C++
class Solution
{
public:
    int findKRotation(vector<int> &arr)
    {
        int n = arr.size();
        int l = 0;
        int r = n - 1;
        int count = 0;
        int mini = INT_MAX;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            // if mid is the smallest
            if (mid > 0 && arr[mid] < arr[mid - 1])
            {
                return mid;
            }
            // if it is already sorted
            if (arr[l] <= arr[r])
            {
                return l;
            }
            // left part is sorted
            if (arr[mid] >= arr[l])
            {
                l = mid + 1;
            }
            else // right part is sorted
            {
                r = mid - 1;
            }
        }
        return l;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1)
        {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends