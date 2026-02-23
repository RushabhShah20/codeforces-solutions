// Problem: The Clock
// Link to the problem: https://codeforces.com/contest/1692/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll minutes(const string &time)
{
    const string hh = time.substr(0, 2), mm = time.substr(3, 2);
    const ll h = stoi(hh), m = stoi(mm);
    return h * 60 + m;
}

void solve()
{
    string s;
    cin >> s;
    ll x;
    cin >> x;
    const vector<string> times = {"00:00", "01:10", "02:20", "03:30", "04:40", "05:50", "10:01", "11:11", "12:21", "13:31", "14:41", "15:51", "20:02", "21:12", "22:22", "23:32"};
    unordered_set<ll> a;
    for (const string time : times)
    {
        a.insert(minutes(time));
    }
    ll ans = 0;
    unordered_set<ll> u;
    ll y = minutes(s);
    u.insert(y);
    y = ((y + x) % 1440);
    while (u.find(y) == u.end())
    {
        u.insert(y);
        y = (y + x) % 1440;
    }
    for (const ll i : a)
    {
        for (const ll j : u)
        {
            if (i == j)
            {
                ans++;
                break;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}