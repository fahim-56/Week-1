#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    n = n + 1;
    int arr[n];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }

    int r = k;
    long long int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += arr[i];
    }
    // cout << sum << endl;
    long long int mx = 0;
    for (int i = 1; i < n; i++)
    {

        sum = sum - arr[i] + arr[r ];
        mx = max(mx, sum);
        r++;
        if (r >= n)
            break;
    }
    cout << mx << endl;
    return 0;
}