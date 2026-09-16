// Problem: Phone Numbers
// Link to the problem: https://codeforces.com/contest/151/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<pair<string, ll>>> a(n, vector<pair<string, ll>>(3));
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        string s;
        cin >> s;
        a[i] = {{s, 0}, {s, 0}, {s, 0}};
        for (ll j = 0; j < m; j++)
        {
            string t;
            cin >> t;
            if (t[0] == t[1] && t[1] == t[3] && t[3] == t[4] && t[4] == t[6] && t[6] == t[7])
            {
                a[i][0].second++;
            }
            else if (t[0] > t[1] && t[1] > t[3] && t[3] > t[4] && t[4] > t[6] && t[6] > t[7])
            {
                a[i][1].second++;
            }
            else
            {
                a[i][2].second++;
            }
        }
    }
    vector<vector<string>> ans(3);
    for (ll i = 0; i < 3; i++)
    {
        ll mx = 0;
        for (ll j = 0; j < n; j++)
        {
            mx = max(mx, a[j][i].second);
        }
        for (ll j = 0; j < n; j++)
        {
            if (a[j][i].second == mx)
            {
                ans[i].push_back(a[j][i].first);
            }
        }
    }
    cout << "If you want to call a taxi, you should call: ";
    for (ll i = 0; i < ans[0].size(); i++)
    {
        cout << ans[0][i] << (i == ans[0].size() - 1 ? "." : ", ");
    }
    cout << endl;
    cout << "If you want to order a pizza, you should call: ";
    for (ll i = 0; i < ans[1].size(); i++)
    {
        cout << ans[1][i] << (i == ans[1].size() - 1 ? "." : ", ");
    }
    cout << endl;
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    for (ll i = 0; i < ans[2].size(); i++)
    {
        cout << ans[2][i] << (i == ans[2].size() - 1 ? "." : ", ");
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}