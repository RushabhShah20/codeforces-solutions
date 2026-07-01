// Problem: Regular Bracket Sequence
// Link to the problem: https://codeforces.com/contest/26/problem/B
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
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (!st.empty() && st.top() == '(' && s[i] == ')')
        {
            st.pop();
            ans += 2;
        }
        else
        {
            st.push(s[i]);
        }
    }
    cout << ans << endl;
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