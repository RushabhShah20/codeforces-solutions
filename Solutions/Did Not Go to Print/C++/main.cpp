// Problem: Did Not Go to Print
// Link to the problem: https://codeforces.com/contest/2275/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    stack<ll> st;
    vector<bool> a(n, false);
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            st.push(i);
        }
        else if (s[i] == '2')
        {
            const ll x = st.empty() ? i : st.top();
            if (!st.empty())
            {
                st.pop();
            }
            a[x] = true;
        }
        else
        {
            a[i] = true;
        }
    }
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        if (!a[i])
        {
            m++;
            ans.push_back(i + 1);
        }
    }
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