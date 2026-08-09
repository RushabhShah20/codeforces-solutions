// Problem: Alex and broken contest
// Link to the problem: https://codeforces.com/contest/877/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    const vector<string> t = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
    vector<ll> a(5, 0);
    for (ll j = 0; j < 5; j++)
    {
        const ll m = t[j].size();
        for (ll i = 0; i <= n - m; i++)
        {
            if (s.substr(i, m) == t[j])
            {
                a[j]++;
            }
        }
    }
    ll x = 0;
    for (ll i = 0; i < 5; i++)
    {
        x += a[i];
    }
    const string ans = x == 1 ? "YES" : "NO";
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