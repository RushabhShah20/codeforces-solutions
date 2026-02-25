// Problem: Codecraft III
// Link to the problem: https://codeforces.com/contest/45/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll k;
    cin >> k;
    unordered_map<string, ll> m;
    unordered_map<ll, string> p;
    m["January"] = 0;
    m["February"] = 1;
    m["March"] = 2;
    m["April"] = 3;
    m["May"] = 4;
    m["June"] = 5;
    m["July"] = 6;
    m["August"] = 7;
    m["September"] = 8;
    m["October"] = 9;
    m["November"] = 10;
    m["December"] = 11;
    p[0] = "January";
    p[1] = "February";
    p[2] = "March";
    p[3] = "April";
    p[4] = "May";
    p[5] = "June";
    p[6] = "July";
    p[7] = "August";
    p[8] = "September";
    p[9] = "October";
    p[10] = "November";
    p[11] = "December";
    const string ans = p[(m[s] + k) % 12];
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