// Problem: George and Sleep
// Link to the problem: https://codeforces.com/contest/387/problem/A
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
    string s, t;
    cin >> s >> t;
    const ll x = minutes(s), y = minutes(t);
    ll z = x >= y ? x - y : 1440 + (x - y);
    z %= 1440;
    const ll c = z / 60, d = z % 60;
    string l = to_string(c), r = to_string(d);
    if (l.size() == 1)
    {
        l.insert(0, 1, '0');
    }
    if (r.size() == 1)
    {
        r.insert(0, 1, '0');
    }
    const string ans = l + ":" + r;
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