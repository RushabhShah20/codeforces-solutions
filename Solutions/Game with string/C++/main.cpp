// Problem: Game with string
// Link to the problem: https://codeforces.com/contest/1104/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll x = 0;
    stack<char> st;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (!st.empty() && st.top() == s[i])
        {
            st.pop();
            x++;
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (x & 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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