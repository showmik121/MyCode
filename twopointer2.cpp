#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int i = 0;
    int j = n - 1;
    int diff = INT_MAX;
    int inl1;
    int inl2;0
    while (i <= j)
    {
        int sum = a[i] + a[j];
        if (abs(sum - x) < diff)
        {
            inl1 = i;
            inl2 = j;
            diff = abs(sum - x);
        }
        if (sum > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << a[inl1] << " " << a[inl2] << endl;
    return 0;
}