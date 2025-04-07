#include <bits/stdc++.h>
using namespace std;
// Aggressive cow
// (minimum distance of cow) is max
bool possible(vector<int> &v, int n, int mid)
{
    int count = 1;
    int last = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - last >= mid)
        {
            count++;
            last = v[i];
        }
    }
    return count >= n;
}

int AggCow(vector<int> &v, int n)
{
    sort(v.begin(), v.end());
    // 0,3,4,7,9,10
    int l = 0;
    int r = v.back() - v.front();
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (possible(v, n, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {

            r = mid - 1;
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
    int k;
    cin >> k;
    int result = AggCow(v, k);
    cout << result << endl;

    return 0;
}