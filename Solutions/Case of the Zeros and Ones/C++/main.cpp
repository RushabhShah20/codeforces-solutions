// Problem: Case of the Zeros and Ones
// Link to the problem: https://codeforces.com/contest/556/problem/A
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
        if (!st.empty() && st.top() != c)
        {
            st.pop();
        }
        else
        {
            st.push(c);
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
    solve();
    return 0;
}