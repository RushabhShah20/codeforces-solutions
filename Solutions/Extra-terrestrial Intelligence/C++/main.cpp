// Problem: Extra-terrestrial Intelligence
// Link to the problem: https://codeforces.com/contest/36/problem/A
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
    unordered_set<ll> t;
    ll j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (j != -1)
            {
                t.insert(i - j);
            }
            j = i;
        }
    }
    const string ans = t.size() == 1 ? "YES" : "NO";
    cout << ans << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}