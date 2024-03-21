#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        s += s;
        if (c == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        int mx = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                v.push_back(i);
            }
        }
        for (int l : v)
        {
            int cnt = 0;
            while (s[l] != 'g' && l < s.size())
            {
                cnt++;
                l++;
            }
            mx = max(cnt, mx);
        }
        cout << mx << endl;
    }
    return 0;
}