// Problem: Vitaliy and Pie
// Link to the problem: https://codeforces.com/contest/525/problem/A
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
    const ll m = (n - 1) << 1;
    vector<ll> a(26);
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        if (islower(s[i]))
        {
            a[s[i] - 'a']++;
        }
        else
        {
            if (a[s[i] - 'A'] == 0)
            {
                ans++;
            }
            else
            {
                a[s[i] - 'A']--;
            }
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