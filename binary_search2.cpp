#include <bits/stdc++.h>
using namespace std;

int rotated_array(vector<int> &v, int target)
{
    int l = 0;
    int r = v.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (target == v[mid])
        {
            return mid;
        }
        if (v[l] <= v[mid]) // left part sorted
        {
            if (v[l] <= target && target <= v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        else // right part sorted
        {
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
    return -1;
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
    int target;
    cin >> target;
    int result = rotated_array(v, target);
    cout << result << endl;
    return 0;
}