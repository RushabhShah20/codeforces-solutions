// Problem: Registration system
// Link to the problem: https://codeforces.com/contest/4/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<string, ll> m;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (m.count(s) > 0)
        {
            string ans = s + to_string(m[s]);
            cout << ans << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
        m[s]++;
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