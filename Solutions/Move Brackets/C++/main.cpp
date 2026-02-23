// Problem: Move Brackets
// Link to the problem: https://codeforces.com/contest/1374/problem/C
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
    for (const char c : s)
    {
        if (!st.empty() && st.top() == '(' && st.top() != c)
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    const ll ans = st.size() / 2;
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