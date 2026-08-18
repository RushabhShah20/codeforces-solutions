// Problem: Jamie and Alarm Snooze
// Link to the problem: https://codeforces.com/contest/916/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    string hh, mm;
    cin >> hh >> mm;
    ll y = stoll(hh) * 60 + stoll(mm);
    ll ans = 0;
    while (hh[0] != '7' && hh[1] != '7' && mm[1] != '7')
    {
        constexpr ll m = 1440;
        y = ((y - x) % m + m) % m;
        hh = to_string(y / 60);
        mm = to_string(y % 60);
        if (hh.size() == 1)
        {
            hh.insert(0, 1, '0');
        }
        if (mm.size() == 1)
        {
            mm.insert(0, 1, '0');
        }
        ans++;
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