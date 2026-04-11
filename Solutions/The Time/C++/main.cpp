// Problem: The Time
// Link to the problem: https://codeforces.com/contest/622/problem/B
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
    ll a;
    cin >> a;
    ll b = minutes(s);
    b += a;
    b %= 1440;
    const ll c = b / 60, d = b % 60;
    string x = to_string(c), y = to_string(d);
    if (x.size() == 1)
    {
        x.insert(0, 1, '0');
    }
    if (y.size() == 1)
    {
        y.insert(0, 1, '0');
    }
    const string ans = x + ":" + y;
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