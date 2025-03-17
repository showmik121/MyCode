#include <bits/stdc++.h>
using namespace std;
// find the minimum in roted sorrted array
int main()
{
    //[4,5,6,7,0,1,2]
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0;
    int r = n - 1;
    int mini = INT_MAX;
    while (l <= r)
    {
        int mid = l + (n - l) / 2;
        if (v[l] <= v[mid]) // left part is sorted
        {
            mini = min(mini, v[l]);
            l = mid + 1;
        }
        else
        {
            mini = min(mini, v[mid]);
            r = mid - 1;
        }
    }
    cout << mini << endl;

    return 0;
}