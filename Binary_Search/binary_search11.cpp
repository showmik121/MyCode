#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int mini = INT_MAX;
    int l = 0;
    int r = 0;
    while (l < n && r < m)
    {
        int dif = abs(arr1[l] - arr2[r]);
        mini = min(mini, dif);
        if (arr1[l]<arr2[r])
        {
            l++;
        }
        else
        {
            r++;
        }
    }
    cout << mini << endl;

    return 0;
}