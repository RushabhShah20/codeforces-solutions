// Problem: Social Network (easy version)
// Link to the problem: https://codeforces.com/contest/1234/problem/B1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    deque<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ll y = -1;
        for (ll j = 0; j < ans.size(); j++)
        {
            if (ans[j] == x)
            {
                y = j;
                break;
            }
        }
        if (y == -1)
        {
            if (ans.size() >= k)
            {
                ans.pop_back();
            }
            ans.push_front(x);
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
    solve();
    return 0;
}