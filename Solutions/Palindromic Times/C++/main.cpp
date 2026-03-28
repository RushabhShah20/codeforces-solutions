// Problem: Palindromic Times
// Link to the problem: https://codeforces.com/contest/108/problem/A
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
    const vector<string> times = {"00:00", "01:10", "02:20", "03:30", "04:40", "05:50", "10:01", "11:11", "12:21", "13:31", "14:41", "15:51", "20:02", "21:12", "22:22", "23:32"};
    string s;
    cin >> s;
    vector<ll> mins;
    for (const string &time : times)
    {
        mins.push_back(minutes(time));
    }
    const ll x = minutes(s);
    const vector<ll>::iterator it = lower_bound(mins.begin(), mins.end(), x);
    ll i;
    if (it == mins.end())
    {
        i = 0;
    }
    else
    {
        i = it - mins.begin();
        if (*it == x)
        {
            i++;
        }
        if (i == times.size())
        {
            i = 0;
        }
    }
    const string ans = times[i];
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