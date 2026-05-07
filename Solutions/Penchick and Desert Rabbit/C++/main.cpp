// Problem: Penchick and Desert Rabbit
// Link to the problem: https://codeforces.com/contest/2031/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> ans(n);
    stack<vector<ll>> st;
    for (ll i = 0; i < n; i++)
    {
        ll x = a[i], l = i, r = i;
        while (!st.empty() && st.top()[0] > a[i])
        {
            const vector<ll> b = st.top();
            st.pop();
            x = max(x, b[0]);
            l = b[1];
        }
        st.push({x, l, r});
    }
    while (!st.empty())
    {
        const vector<ll> b = st.top();
        for (ll j = b[1]; j <= b[2]; j++)
        {
            ans[j] = b[0];
        }
        st.pop();
    }
    for (ll i = 0; i < n; i++)
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