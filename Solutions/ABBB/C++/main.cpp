// Problem: ABBB
// Link to the problem: https://codeforces.com/contest/1428/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    stack<char> st;
    st.push(s[0]);
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == 'B' && !st.empty())
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    const ll ans = st.size();
    cout << ans << endl;
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