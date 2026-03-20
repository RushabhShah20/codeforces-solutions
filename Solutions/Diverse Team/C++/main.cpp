// Problem: Diverse Team
// Link to the problem: https://codeforces.com/contest/988/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    unordered_set<ll> s;
    vector<ll> ans, a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (ans.size() == k)
        {
            break;
        }
        if (s.count(a[i]) == 0)
        {
            ans.push_back(i + 1);
            s.insert(a[i]);
        }
    }
    if (ans.size() < k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (ll i = 0; i < k; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
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