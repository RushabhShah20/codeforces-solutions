// Problem: Simple XML
// Link to the problem: https://codeforces.com/contest/125/problem/B
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
    ll i = 0;
    while (i < n)
    {
        if (s[i + 1] == '/')
        {
            st.pop();
            string m(2 * st.size(), ' ');
            cout << m << s.substr(i, 4) << endl;
            i += 4;
        }
        else
        {
            st.push(s[i]);
            string m(2 * (st.size() - 1), ' ');
            cout << m << s.substr(i, 3) << endl;
            i += 3;
        }
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