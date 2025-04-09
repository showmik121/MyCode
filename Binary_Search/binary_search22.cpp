#include <bits/stdc++.h>
using namespace std;
// book allocation
//  minimize maximum page
bool possible(vector<int> &v, int m, int mid)
{
    int count = 1;
    int sum = 0;
    // 2,1,3,4  mid=5
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > mid)
        {
            return false;
        }

        if (sum + v[i] <= mid)
        {
            sum += v[i];
        }
        else
        {
            count++;
            sum = v[i];
        }
    }
    return count >= m;
}

int bookAllocation(vector<int> &v, int m)
{
    // sort(v.begin(), v.end());
    int l = 0;
    int r = accumulate(v.begin(), v.end(), 0);
    if (v.size() < m)
    {
        return -1;
    }
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (possible(v, m, mid))
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

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int m;
    cin >> m;
    int result = bookAllocation(v, m);
    cout << result << endl;
    return 0;
}