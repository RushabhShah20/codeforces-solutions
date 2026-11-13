// Problem: Social Network (hard version)
// Link to the problem: https://codeforces.com/contest/1234/problem/B2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    deque<ll> ans;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (s.find(x) == s.end())
        {
            if (ans.size() >= k)
            {
                s.erase(ans.back());
                ans.pop_back();
            }
            ans.push_front(x);
            s.insert(x);
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