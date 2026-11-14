// Problem: Course Wishes
// Link to the problem: https://codeforces.com/contest/2216/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k), b(n);
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<ll> ans;
    for (ll j = k; j >= 1; j--)
    {
        for (ll i = 0; i < n; i++)
        {
            if (b[i] == j)
            {
                while (b[i] <= k)
                {
                    ans.push_back(i + 1);
                    b[i]++;
                }
            }
        }
    }
    const ll m = ans.size();
    cout << m << endl;
    for (ll i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}