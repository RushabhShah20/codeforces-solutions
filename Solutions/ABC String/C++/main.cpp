// Problem: ABC String
// Link to the problem: https://codeforces.com/contest/1494/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll x = 0; x <= 1; x++)
    {
        for (ll y = 0; y <= 1; y++)
        {
            for (ll z = 0; z <= 1; z++)
            {
                const char a = x == 0 ? '(' : ')', b = y == 0 ? '(' : ')', c = z == 0 ? '(' : ')';
                string t(n, ' ');
                for (ll i = 0; i < n; i++)
                {
                    if (s[i] == 'A')
                    {
                        t[i] = a;
                    }
                    else if (s[i] == 'B')
                    {
                        t[i] = b;
                    }
                    else
                    {
                        t[i] = c;
                    }
                }
                stack<char> st;
                for (ll i = 0; i < n; i++)
                {
                    if (!st.empty() && st.top() == '(' && t[i] == ')')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(t[i]);
                    }
                }
                if (st.empty())
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
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