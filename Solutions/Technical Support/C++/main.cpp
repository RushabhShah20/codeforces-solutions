// Problem: Technical Support
// Link to the problem: https://codeforces.com/contest/1754/problem/A
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
    stack<char> st;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'Q')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
    }
    const string ans = st.empty() ? "Yes" : "No";
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