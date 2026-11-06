// Problem: Calendar
// Link to the problem: https://codeforces.com/contest/304/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll dayOfYear(const string &date)
{
    const ll day = stoi(date.substr(8, 2)), month = stoi(date.substr(5, 2)), year = stoi(date.substr(0, 4));
    ll ans = 0;
    for (ll i = 1900; i < year; i++)
    {
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
        {
            ans += 366;
        }
        else
        {
            ans += 365;
        }
    }
    const vector<ll> months = {31, year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (ll i = 0; i < month - 1; i++)
    {
        ans += months[i];
    }
    ans += day;
    return ans;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    const ll x = dayOfYear(a), y = dayOfYear(b), ans = abs(x - y);
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