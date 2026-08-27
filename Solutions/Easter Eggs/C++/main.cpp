// Problem: Easter Eggs
// Link to the problem: https://codeforces.com/contest/78/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const string s = "ROYGBIV";
    const vector<string> t = {"", "G", "GB", "YGB", "YGBI", "OYGBI", "OYGBIV"};
    string ans;
    for (ll i = 0; i < n / 7; i++)
    {
        ans += s;
    }
    ans += t[n % 7];
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